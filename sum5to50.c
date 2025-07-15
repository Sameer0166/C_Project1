#include<stdio.h>
int main()
{
    /*
    This program calculates the sum of all integers from 5 to 50.
    It uses a for loop to iterate through the numbers from 5 to 50.
    In each iteration, it adds the current number to the sum.
    This is a simple demonstration of how to use a for loop in C to perform repetitive calculations, specifically for summing a range of numbers.
    The program is useful for understanding the basic structure of a for loop, including initialization, condition,
    incrementing the loop variable, and performing calculations within the loop.
    */
    int i,sum;
    for(i=5;i<=50;i++){
        sum+=i;    
    }
    printf("%d",sum);
    return 0;
}