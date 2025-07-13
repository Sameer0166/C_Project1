#include<stdio.h>
int main(){
    int day;
     /*This program will take a character input from the user and print the corresponding day of the week.
    enter the character to know the day of the week 
    m = Mondau
    t=Tuesday
    w=Wednesday
    T=Thursday
    f=Friday
    s=Saturday
    S=Sunday*/
    
    printf("enter the number of the required day[1-7]: ");
    scanf("%s",&day);
    switch(day)
    {
        case 'm': printf("Monday");
                break;
        case 't': printf("Tuesday");
                break;
        case 'w': printf("Wednesday");
                break;
        case 'T': printf("Thursday");
                break;
        case 'f': printf("Friday");
                break;
        case 's': printf("Saturday");
                break;
        case 'S': printf("Sunday");
                break;
        default: printf("Enter a valid number to know the day");
    }
    return 0;
}