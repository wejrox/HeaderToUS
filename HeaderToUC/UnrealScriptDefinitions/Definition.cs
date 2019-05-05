using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.UnrealScriptDefinitions
{
    public class Definition
    {
        /// <summary>Name of this definition</summary>
        public string Name { get; set; }

        /// <summary>Name of the package that this definition belongs to.</summary>
        public string PackageName { get; protected set; }

        /// <summary>Name of the file that this definition should be added to.</summary>
        public string ClassFileName { get; protected set; }

        /// <summary>
        /// Define the definition, which all have a name, the package they belong to and the class they belong to.
        /// The class they belong to may be the same as the name if it is a class definition.
        /// </summary>
        /// <param name="name">The name that represents this definition.</param>
        /// <param name="packageName">Packages that this definition resides in.</param>
        /// <param name="classFileName">Class that this definition resides in.</param>
        protected void GenerateDefinition(string name, string packageName, string classFileName)
        {
            this.Name = name;
            this.PackageName = packageName;
            this.ClassFileName = classFileName;
        }
    }
}
