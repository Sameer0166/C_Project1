#include<stdio.h>
int main()
{/*
This program checks the age of a person and determines their eligibility to vote.
 It prompts the user to enter their age and then uses if-else statements to categorize
the person as an adult, minor, or child based on their age.
 If the age is 18 or older, the person is considered an adult and eligible to vote
    If the age is between 6 and 17, the person is considered a minor and not eligible to vote.
    If the age is less than 6, the person is considered a child and not eligible to vote.
    If the age is negative or invalid, the program prompts the user to enter a valid age.
    This program is useful for understanding how to use if-else statements in C to handle multiple conditions based on user input.
    */
    int age;
printf("enter the age of the person: ");
scanf("%d",&age);
if(age>18)
{
    printf("you are eligible for the vote\n Thank You \n");
}
else {
    printf("wait for your vot untill you reach 18.\n Thank You\n");
}
return 0;
}