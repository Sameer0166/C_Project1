#include<stdio.h>
int main()
{
int m,n,j;
/*
This program uses a for loop to print the multiplication table of a given number 'n'
from 'm' to 'j'.
The user is prompted to enter the values of 'n', 'm', and 'j'.
The for loop initializes the variable 'i' to 'm' and continues to execute the loop
as long as 'i' is less than or equal to 'j'.
In each iteration, it calculates the product of 'i' and 'n', and prints the
multiplication result in the format "i*n=result".
This is a simple demonstration of how to use a for loop in C to perform
repetitive calculations, specifically for generating multiplication tables.
The program is useful for understanding the basic structure of a for loop, including initialization, condition,
incrementing the loop variable, and performing calculations within the loop.
*/
printf("enter the value of n:");   
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
printf("enter the value of j:");
scanf("%d",&j);
for(int i=m;i<=j;i++)
{
    printf("%d*%d=%d\n",i,n,i*n);

}
return 0;
}