# HeaderToUS
This project aims to create a executable which can be used to transform code from a C/C++ header file into a compile-ready UDK3 package.

## Reason for creation
When modding the game RocketLeague, we use stubs of the in-game classes to piggyback off the functionality provided in-game. As time goes on, these classes become outdated since Psyonix change their implementation. We can dump the classes available as header files from the running game, but we didn't have a method to transform these into classes that we could import into our UDK installations.  

## Method
When using these classes in UDK, we only need to know the inputs and outputs at an abstract level in order to use them, so the transpiler takes the header and transforms it into a stub which is readable by UDK.  
The output of the execution is logged to file, with the user informed of failures.

## Tech used
- C#
- Visual Studio CLI

## Definition of done
This project will be defined as completed when it:
- [x] Exports header file definitions as UnrealScript files.
- [x] Includes input and output definitions.
- [x] Logs output to a standard location and format.
- [x] Handles non-critical failure gracefully, informing the user.

### Stretch goals
There are a number of stretch goals which I would like to implement.
- [x] Custom logger implementation.
- [x] String serialisation for ease of output.
- [x] Better failure handling, more structured failure file output.

## Retrospective
- Transpilers are difficult to get perfect, this would have been a much bigger project if I needed to transpile method bodies too.
- Not all datatypes have an equivalent in other languages, which leads to a bit of guessing.
- String serialisation helps a lot with object output.