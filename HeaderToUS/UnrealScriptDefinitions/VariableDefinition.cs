using HeaderToUS.Audit;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace HeaderToUS.UnrealScriptDefinitions
{
    public class VariableDefinition : Definition
    {
        /// <summary>
        /// Enumerable representations of a modifier to be applied to a variable.
        /// </summary>
        public enum VariableModifier
        {
            Edit = 0,
            Const,
            EditConst,
            EditConstArray,
            EditInline,
            EditInlineNotify,
            Localized,
            Export,
            Transient,
            Native,
            Net,
            NoExport
        }
        /// <summary>Type that this variable will hold.</summary>
        private string Type { get; set; }
        /// <summary>Modifiers to apply to the variable.</summary>
        public List<VariableModifier> Modifiers { get; private set; }

        /// <summary>
        /// Creates a new variable by parsing the header definition provided.
        /// </summary>
        /// <param name="headerDefinition">The definition of this variable provided by the header.</param>
        public VariableDefinition(string headerDefinition, string packageName, string classFileName)
        {
            // Remove unneeded parts of the definition.
            string cleanedDefinition = headerDefinition.Replace("struct ", "").Replace("class ", "").Replace("unsigned ", "").Replace("1", "").Replace(";", "").Replace(":", "").Replace("< ", " ").Replace("<", " ").Replace(" >", " ").Replace(">", " ").Replace("*", "");

            string type = GetVariableType(cleanedDefinition);
            string name = GetVariableName(cleanedDefinition);

            // Set the type of this variable if it's valid.
            if (type != null && name != null)
            {
                int memLocIndex = name.IndexOf('[');
                if (memLocIndex != -1)
                {
                    name = name.Remove(memLocIndex, name.Count() - memLocIndex);
                }
                this.Type = type;
                this.GenerateDefinition(name, packageName, classFileName);

                // Set the modifiers of this variable.
                SetModifiers(cleanedDefinition);
            }
            else
            {
                // Can't create the variable.
                throw new InvalidVariableException();
            }
        }
        
        /// <summary>
        /// Sets what type of variable this variable is.
        /// Could be a primitive type or a class type, or an array. 
        /// </summary>
        /// <param name="headerDefinition"></param>
        private string GetVariableType(string headerDefinition)
        {
            // Split based on double space as type definitions may be arrays with spaces in between the type.
            List<string> splitDefinition = Regex.Split(headerDefinition, @"  ").ToList<string>();
            splitDefinition.RemoveAll(item => item == "");

            // Get rid of any excess spaces.
            foreach (string entry in splitDefinition)
            {
                entry.Replace(" ", "");
            }

            // Get the base type of the variable.
            string type = GetType(splitDefinition[0]);
            switch(type)
            {
                case "array":

                    // Append the array type inside here (type is after the array keyword separated by space due to the replace operations performed earlier).
                    type += "<" + GetType(splitDefinition[0].Split(' ')[1]) + ">";
                    break;
            }

            // Only add if it's not unknown. (Unknown types become variables named 'UnknownData<id>').
            if (splitDefinition[1].Contains("UnknownData"))
            {
                throw new InvalidVariableException("Unknown data variable");
            }

            // Return the formatted type.
            return type;
        }


        /// <summary>
        /// Gets the correct type for the type string given.
        /// </summary>
        /// <param name="type">Header representation of the type in UnrealScript.</param>
        /// <returns></returns>
        private string GetType(string type)
        {
            switch (type)
            {
                // Variable is an array.
                // There may not be spaces in the definition to split the type and its children so use a regex to decide if it is a TEnumAsByte property.
                case var enumType when new Regex(@"TArray").IsMatch(enumType):
                    return "array";

                // Variable is an enum entry. 
                // There may not be spaces in the definition to split the type and its children so use a regex to decide if it is a TEnumAsByte property.
                case var enumType when new Regex(@"TEnumAsByte").IsMatch(enumType):
                    return "byte";

                // Variable is a boolean.
                case "long":
                    return "bool";

                // Variable is a script delegate.
                case "FScriptDelegate":

                    // Throw variable creation exception, delegates break UDK compilation.
                    throw new InvalidVariableException("Delegate variable");

                // Variable is a byte.
                case "char":
                    return "byte";

                // Variable is a string.
                case "FString":
                    return "string";

                // Variable is a name.
                case "FName":
                    return "name";

                // Variable is a known primitive or a class reference.
                default:

                    // If the first two letters are uppercase then it's a class or struct reference and has a prefix that needs to be removed.
                    // Fuint is a special case as it is seemingly the only custom type that doesn't follow this naming convention.
                    if((Char.IsUpper(type[0]) && Char.IsUpper(type[1])) || type == "Fuint")
                    {
                        type = type.Remove(0, 1);
                    }
                    return type;
            }
        }

        /// <summary>
        /// Returns the name of a given variable.
        /// </summary>
        /// <param name="headerDefinition">The definition of this variable provided by the header.</param>
        /// <returns></returns>
        private string GetVariableName(string headerDefinition)
        {
            // Split when there have been three spaces in a row (three because when the string is parsed arrays have spaces, so removing their symbols creates 2 spaces).
            List<string> splitDefinition = Regex.Split(headerDefinition, @" {3,}").ToList<string>();
            splitDefinition.RemoveAll(item => item == "");

            // Get the name of the variable.
            string name = null;
            name = splitDefinition[1];

            // Return the formatted type.
            return name;
        }

        /// <summary>
        /// Sets the modifiers of the variable by splitting the definition in the right spots.
        /// </summary>
        /// <param name="headerDefinition">The definition of this variable provided by the header.</param>
        private void SetModifiers(string headerDefinition)
        {
            // Create the Modifiers list. Needs to be created even if none exist or it cannot be accessed for printing.
            this.Modifiers = new List<VariableModifier>();

            // Get the modifiers of the variable.
            string[] definitionParts = headerDefinition.Split(new Char[] { '(', ')' });
            if (definitionParts.Length < 4)
            {
                // No modifiers present, exit function.
                return;
            }

            // Get the modifiers individually.
            List<string> modifiers = definitionParts[3].Split(new Char[] { ' ', '|', ','}).ToList<string>();

            // Remove empty string entries.
            modifiers.RemoveAll(entry => entry == "");

            // Add each modifier.
            foreach (string modifier in modifiers)
            {
                switch(modifier)
                {
                    case "CPF_Edit":
                        this.Modifiers.Add(VariableModifier.Edit);
                        break;
                    case "CPF_Const":
                        this.Modifiers.Add(VariableModifier.Const);
                        break;
                    case "CPF_EditConst":
                        this.Modifiers.Add(VariableModifier.EditConst);
                        break;
                    case "CPF_Transient":
                        this.Modifiers.Add(VariableModifier.Transient);
                        break;
                    case "CPF_Export":
                        if (!this.Modifiers.Contains(VariableModifier.Export))
                        {
                            this.Modifiers.Add(VariableModifier.Export);
                        }
                        break;
                    case "CPF_ExportObject":
                        if (!this.Modifiers.Contains(VariableModifier.Export))
                        {
                            this.Modifiers.Add(VariableModifier.Export);
                        }
                        break;
                    case "CPF_EditInline":
                        this.Modifiers.Add(VariableModifier.EditInline);
                        break;
                    case "CPF_EditInlineNotify":
                        this.Modifiers.Add(VariableModifier.EditInlineNotify);
                        break;
                    case "CPF_Native":
                        this.Modifiers.Add(VariableModifier.Native);
                        break;
                    case "CPF_Localized":
                        this.Modifiers.Add(VariableModifier.Localized);
                        break;
                    case "CPF_Net":
                        this.Modifiers.Add(VariableModifier.Net);
                        break;
                    case "CPF_EditConstArray":
                        this.Modifiers.Add(VariableModifier.EditConstArray);
                        break;
                    case "CPF_NoExport":
                        this.Modifiers.Add(VariableModifier.NoExport);
                        break;
                    case "CPF_DataBinding":
                        this.Modifiers.Add(VariableModifier.EditInlineNotify);
                        break; ;
                    case "CPF_Config":
                        // Do nothing. No need.
                        break;
                    case "CPF_GlobalConfig":
                        // Do nothing. No need.
                        break;
                    case "CPF_Component":
                        // Do nothing. No need.
                        break;
                    case "CPF_NeedCtorLink":
                        // Means the header has no reference to the type specified. Ignore.
                        break;
                    default:
                        Logger.Warn("Modifier '" + modifier + "' not recognised.");
                        break;
                }
            }
        }

        /// <summary>
        /// Turns the variable into an UnrealScript variable definition ended by a new line character.
        /// </summary>
        /// <returns>A formatted variable definition.</returns>
        public override string ToString()
        {
            string variableDefinition = "";
            variableDefinition = this.Modifiers.Contains(VariableModifier.Edit) ? "var()" : "var";

            // Add modifiers.
            foreach (VariableModifier modifier in this.Modifiers)
            {
                switch (modifier)
                {
                    case VariableModifier.Const:
                        variableDefinition += " const";
                        break;
                    case VariableModifier.EditConst:
                        variableDefinition += " editconst";
                        break;
                    case VariableModifier.EditConstArray:
                        variableDefinition += " editconstarray";
                        break;
                    case VariableModifier.EditInline:
                        variableDefinition += " editinline";
                        break;
                    case VariableModifier.EditInlineNotify:
                        variableDefinition += " databinding";
                        break;
                    case VariableModifier.Export:
                        variableDefinition += " export";
                        break;
                    case VariableModifier.Transient:
                        variableDefinition += " transient";
                        break;
                    case VariableModifier.Native:
                        variableDefinition += " native";
                        break;
                    case VariableModifier.Net:
                        variableDefinition += " repnotify";
                        break;
                    case VariableModifier.NoExport:
                        variableDefinition += " noexport";
                        break;
                }
            }

            // Add type.
            variableDefinition += " " + this.Type;

            // Add name.
            variableDefinition += " " + this.Name;

            // Close line, add new line.
            variableDefinition += ";" + '\n';

            return variableDefinition;
        }
    }
}
