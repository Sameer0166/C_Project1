#include<stdio.h>
int main()
{
    /*
    This program demonstrates the use of a continue statement within a for loop.
    The for loop initializes the variable 'i' to 0 and continues to execute the loop    
    as long as 'i' is less than or equal to 10.
    In each iteration, it checks if 'i' equals 4. If it does, the continue statement is executed,
    which skips the rest of the loop body for that iteration and moves to the next iteration.
    This is a simple demonstration of how to use a continue statement in C to control the flow of a loop.
    The program is useful for understanding how to skip certain iterations of a loop based on a condition
    The program prints the values of 'i' from 0 to 10, but skips printing when 'i' equals 4.

    The program is useful for understanding the basic structure of a for loop, including initialization, condition, 
    incrementing the loop variable, and using a continue statement to skip certain iterations.
        
    */
    int i;
    for(i=0;i<=10;i++)
    {
        
        if(i==4)
        {
            continue ;
        }
        printf("%d\n",i);
}
}