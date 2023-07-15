Preprocessor problem solving
preprocessor is a program and not a compiler.
a part in the compilation process.
basicallly a text substituion tool.
during preprocessing all the lines that begin with # eg #define PI 3.14.. preprocessor first understands 
preprocessor expands the source code: eg #include <stdio.h> goeas ahead an includes the stdio.h source file 
compiler compiles the extended file eg the stdio.h file is the one that is compiled by the compiler.
two ways we can use the #include is through use of <> or "".
There are major types of preprocessor directives:
1. macro expansion
macro expansion specifies the types of macros with arguments. 
syntax: #define name substitute text
example
#define PrintLOWER 50
void main()
{
	int j;
	for (j=1; i<=PrintLOWER; j++)
	{
		printf("\n%d",j);
	}
}
2. File Inclusion
we use #include TypeYourfilename
3. Conditional Compilation.
syntax: #if TESTYourCondtion <=8
statement 1;
statement 2;
statement 3;
statement 4;
#else
statement 5;
#endif
4.Miscellaneous Directives

