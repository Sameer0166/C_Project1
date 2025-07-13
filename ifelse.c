#include<stdio.h>
int main()
{
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