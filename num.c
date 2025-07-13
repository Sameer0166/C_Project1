#include<stdio.h>
int main()
{
    int x;
    /*
        here we are checking if the number is between 10 and 100
        if the number is greater than 9 and less than 100, it will return true  
        otherwise it will return false
        this program is useful for understanding how to use logical operators in C to check conditions.
        The logical AND operator (&&) is used to combine two conditions.
        If both conditions are true, the overall expression evaluates to true (1).
        If either condition is false, the overall expression evaluates to false (0).
    */
    printf("enter the number:");
    scanf("%d",&x);
    printf("the given number is between the given number if 0 false and 1 is true= %d",x>9&&x<100);
    return 0;
}
   