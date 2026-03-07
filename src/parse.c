/** file for the parser: 
should: (mostly in order, shouldn't all be in this file)
  * 1. Seperate each line
  * 2. Evaluate Macros and constants (ex, x + (0x20 + 8) -> x + 0x28)
  * 3. Import normal modules and include normal files (ex, files for IO, files for string operations, etc.)
Import.c
  * 4. include additional files by just copying the contents of the file in the position of the include directive (simplest way)
  * 5. Import additional modules (not python modules) from a directory specified
Functions.c
  * 6. Initialize global variables
  * 7. create a function table for calls to function

  * 8. Return an error if anything doesnt match the syntax

if possible:

Optimize.c
  * Optimize files to remove redundant and slow calls/ operations (optional but highly encouraged, also encourgaed to put in different file)
        1. Evaluate common functions (ex, len("string") -> 6, printf("hello\n") > puts("hello");
        2. Optimize memory operations (ex, 
var = 5 useless
var = 6
> var = 6
,
var = 5
func(var) 
> func(5)
)

should not:

interpret.c
  * 1. Execute actual code
  
*/
