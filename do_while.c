#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the m value:");
    scanf("%d",&m); 
   printf("enter the n value");
scanf("%d",&n);
int i=m; // initializing the loop variable
    // The loop starts from 'm' and continues until 'n'
do{
    printf("%d\n",i);
    i++; // incrementing the loop variable
}
while(i<=n);
    /*
    This program uses a do-while loop to print numbers starting from 'm' up to 'n'.
    The do-while loop executes the block of code at least once and continues to execute
    as long as the condition (i <= n) is true.
    In each iteration, it prints the current value of 'i' and increments 'i' by 1.
    This is a simple demonstration of how to use a do-while loop in C to repeat a block of code multiple times.
    The program is useful for understanding the basic structure of a do-while loop, including initialization, condition
    and incrementing the loop variable.
    */
    return 0;
}
