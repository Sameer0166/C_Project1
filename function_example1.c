#include<stdio.h>
void helloworld();// function prototype declaration
int main()
{for(int i=0;i<5;i++){
    helloworld();
}// for loop to call the function 5 times   
return 0;    
}
void helloworld()// function definition
{ //we can write "n" no.of printing statements in this function
 // And this function can be called "n" number of times in the program.
//
 /*
    This function prints a simple message to the console.
    It is a demonstration of how to define and call a function in C.
    The function does not take any parameters and does not return any value.
    It simply prints three lines of text to the console.
    This is useful for understanding the basic structure of a function in C, including how to declare, define, and call a function.
    */
    printf("hello world\n"); 
    printf("my name is Mohd sameer pasha\n");
    printf("this is a function example\n");
    printf("this is a simple function example in C\n");
}