#include<stdio.h>
int main()
{/*
    This program checks if a number is positive, negative, or zero.
    It prompts the user to enter a number and then uses nested if-else statements to determine      
    the sign of the number and whether it is even or odd.
    If the number is positive, it checks if it is even or odd.
    If the number is negative, it checks if it is even or odd.
    If the number is zero, it simply prints that the number is zero.
    If the number is invalid, it prompts the user to enter a valid number.
    This program is useful for understanding how to use nested if-else statements in C to handle multiple conditions based on user input.
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0){
    printf("THE NUMBER IS POSITIVE\n");
    if(n%2==0){
        printf("the given number is even\n");
    }
    else{
        printf("the given number is odd\n");  
    }
}
    else if(n<0){
        printf("THE NUMBER IS NEGATIVE\n");
        if(n%2==0){
            printf("the given number is negative even number\n");
        }
        else{
              printf("the given number is negative odd number\n");
        }
        }
           else if(n==0){
            printf("the given number is zero\n");
        }
            else{
                printf("the given number is invalid\n");
            }
        }
    