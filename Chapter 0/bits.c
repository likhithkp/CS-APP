#include<stdio.h>

int main(){
    printf("Hello\n");
    return 0;
};

/**
 * Conversion
 * ------------
 * This is called source text file.
 * Every character form the beginning i.e # till the end of the program i.e }; is converted into byte.
 * In very end of line there is extra character added "/n", which means end of line after ";" similar to how "." is used
 * in books.
 * Space, tabs and empty lines are also calculated per ASCII rules.
 * Overall everything from the start of file till the end of code including the EOL "\n" is converted to bits via ASCII 
 * rules.
 * 
 * Process of compilation
 * ------------------------
 * The computer machine cannot read anything other than 0 or 1, i.e bits.
 * So since computer executes via bytes, these bits are made into bytes i.e 8 bits Ex: 010010101.
 * This is why we need our text readable program to be converted ot machine readable format i.e binary.
 * C is sometimes misinterpreted as low level languge, but it is still a high level language, bcs it is not readable by 
 * computer. 
 * 
 * There are steps to convert from text source code to machine code.
 * Steps:
 * ----------
 * Preprocessor --> Compiler ---> Assembler --> Linker --> FINAL BINARY FILE i.e ".exe file".
 * 
 * 1) Preprocessor: The source/text code is modified as per the headers started by #, ex #include<stdio.h>. And then read 
 * the header files and add it directly into the text file. Output = "hello.i".
 * 2) Compiler: The modified "hello.i" is then converted to assembly language. Assembly langugae is norm bcs it is 
 * supported by almost any high level language. Output: "hello.s".
 * 3) Assembler: The "hello.s" is then converted to machine language instruction and stores it in "hello.o". This is a
 * binary file and opening it would be looking gibberish.
 * 4) Linker: If the program file code contains any code that is outside the file, for example "printf" function resides
 * in a separate precompiled object file called "printf.o". The linker merges this part into our main code file and then
 * finally our source file is converted into "hello.exe" binary executable file.
 */