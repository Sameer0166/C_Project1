#include<stdio.h>
int main()
{
    /*
    This program checks the age of a person and determines their eligibility to vote.
    It prompts the user to enter their age and then uses a ternary operator to check if the person is an adult or not.
    If the age is 18 or older, it prints "the given person is adult".
    If the age is less than 18, it prints "the given person is not adult".
    This program is useful for understanding how to use the ternary operator in C to evaluate conditions and execute different statements based on the result.
    */
int age;
printf("enter the age of the person: ");
scanf("%d",&age);
age>=18 ? printf("the given pereson is adult"):printf("the given person is not adult");
return 0;
}
