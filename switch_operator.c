#include<stdio.h>
int main()
{// switch operator using constant interger values in cases.

    // This program will take a number from the user and print the corresponding day of the week.
    // The user will input a number between 1 and 7, where each number corresponds to a day of the week.
    // 1 for Monday, 2 for Tuesday, and so on, up to 7 for Sunday.  
    // If the user inputs a number outside this range, the program will prompt them to enter a valid number.
    // This is a simple demonstration of using the switch statement in C to handle multiple cases based on user input.
    // The switch statement evaluates the variable 'day' and executes the corresponding case block.
    // If no case matches, the default case is executed, prompting the user to enter a valid number.
    // This program is useful for understanding how switch statements work in C and how to handle user input effectively. 
    int day;
    printf("enter the number of the required day[1-7]: ");
    scanf("%d",&day);
switch(day)
{
    case 1: printf("Monday");
            break;
    case 2: printf("Tuesday");
            break;
    case 3: printf("Wednesday");
            break;
    case 4: printf("Thursday");
            break;
    case 5: printf("Friday");
            break;
    case 6: printf("saturday");
            break;
    case 7: printf("sunday");
            break;
    default: printf("Enter a valid number to know the day");
}

return 0;}
