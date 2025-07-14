#include<stdio.h>
int main()
{
int n;
printf("enter the n value" );
scanf("%d",&n);
int i=0; // initializing the loop variable
while (i<=n)
{
    printf("%d\n",i);
    i++;
    /*  This program uses a while loop to print numbers starting from 'n' until 'i' is less than 'n'.       
    The while loop initializes the variable 'i' to 'n' and continues to execute the loop
    as long as 'i' is less than 'n'.
    In each iteration, it prints the current value of 'i' and increments 'i' by 1.
    This is a simple demonstration of how to use a while loop in C to repeat a block of code multiple times.
    The program is useful for understanding the basic structure of a while loop, including initialization, condition
    and incrementing the loop variable.
    */
    
}
return 0;
}