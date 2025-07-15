#include<stdio.h>
int main()
{int i;
    do{
    printf("enter the value of i:");
    scanf("%d",&i);
if(i%2!=0)
{
    printf("\n");
    printf("enter value %d is an odd number\n",i);
    break;
}
    }
while(1); /* Here "while(1)" means true, so the loop will continue indefinitely until a break statement is encountered.
          Infinite loop to keep prompting for input
          This program demonstrates the use of a break statement within a do-while loop.
          The do-while loop continues to prompt the user for input until an odd number is entered.
          In each iteration, it checks if the entered number is odd. If it is, the break statement is executed,
          which exits the loop prematurely.
          This is a simple demonstration of how to use a break statement in C to control the flow of a loop based on user input.
          The program is useful for understanding how to terminate a loop early based on a condition.
          The program prints the entered value and indicates whether it is an odd number before exiting the loop*/
return 0;
}