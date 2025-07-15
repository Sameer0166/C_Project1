#include<stdio.h>
int main()
{int i;
    /*
    This program demonstrates the use of a break statement within a for loop.
    The for loop initializes the variable 'i' to 1 and continues to execute the loop
    as long as 'i' is less than or equal to 10. 
    In each iteration, it checks if 'i' equals 5. If it does, the break statement is executed,
    which exits the loop prematurely.
    This is a simple demonstration of how to use a break statement in C to control the flow of a loop.  
    The program is useful for understanding how to terminate a loop early based on a condition.
    The program prints the values of 'i' from 1 to 10, but stops printing when 'i' equals 5.
    The program is useful for understanding the basic structure of a for loop, including initialization, condition,
    incrementing the loop variable, and using a break statement to exit the loop early.
    */
    for( i=0;i<=10;i++)
    {
        if(i==5){
        break ; // Exit the loop when i equals 5
        }
    
    printf("%d\n",i);   
}
    printf("Exited the loop at i = %d\n", i); // Indicating where the loop was exited
    printf("Loop completed.\n"); // Indicating the end of the loop
    return 0;

}