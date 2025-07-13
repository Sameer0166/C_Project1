#include<stdio.h>
int main()
{
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