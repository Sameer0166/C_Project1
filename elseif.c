#include<stdio.h>
int main()
{
    /*This program checks the age of a person and determines their eligibility to vote.
     It prompts the user to enter their age and then uses if-else statements to categorize
        the person as an adult, minor, or child based on their age.         
        If the age is 18 or older, the person is considered an adult and eligible to vote.
        If the age is between 6 and 17, the person is considered a minor and not eligible to vote.
        If the age is less than 6, the person is considered a child and not eligible to vote.
        If the age is negative or invalid, the program prompts the user to enter a valid age.                               
        This program is useful for understanding how to use if-else statements in C to handle multiple conditions based on user input.
     */
    int age;
    printf("enter the age of the person: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are adult and eligible to vote.\n Thank You\n");
    }
    else if(age<18&&age>=6)
    {
    printf("you are a minor and not eligible to vote.\n Thank You\n");
}
else if(age<6&&age>=0)
{
    printf("you are a child and not eligible to vote.\n Thank You\n");
}
    else
    {
        printf("Invalid age entered.\n Please enter a valid age.\n");
    }
    return 0;
}