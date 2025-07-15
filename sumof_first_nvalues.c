#include<stdio.h>
int main()
{int n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i; // Adding the current value of i to sum
        printf("%d\n",i); // Printing the current value of i
        printf("Sum so far: %d\n", sum); // Printing the current sum

    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum); // Printing the final sum
    return 0; // Indicating successful completion of the program
/*
This program calculates the sum of the first n natural numbers using a for loop.
The for loop initializes the variable 'i' to 0 and continues to execute the loop
as long as 'i' is less than or equal to 'n'.
In each iteration, it adds the current value of 'i' to the sum and prints both
the current value of 'i' and the sum so far.
This is a simple demonstration of how to use a for loop in C to perform
repetitive calculations.
The program is useful for understanding the basic structure of a for loop,including initialization, condition,
incrementing the loop variable, and performing calculations within the loop.
*/
}

