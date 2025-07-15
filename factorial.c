#include<stdio.h>
int main(){
/*
This program calculates the factorial of a given number 'n' using a for loop.   
The user is prompted to enter the value of 'n'.
The for loop initializes the variable 'i' to 1 and continues to execute the loop
as long as 'i' is less than or equal to 'n'.    
In each iteration, it multiplies the current value of 'i' to the factorial variable 'fact'.
This is a simple demonstration of how to use a for loop in C to perform repetitive calculations,
specifically for calculating the factorial of a number.
The program is useful for understanding the basic structure of a for loop, including initialization, condition,
incrementing the loop variable, and performing calculations within the loop.
*/
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    
    }
    printf("%d",fact);
return 0;
}