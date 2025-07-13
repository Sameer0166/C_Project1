#include<stdio.h>   
int main()
{
    /*
    This program takes a student's marks as input and assigns a grade based on the marks.
    The grading system is as follows:
    - Marks 90-100: Grade A
    - Marks 80-89: Grade B
    - Marks 70-79: Grade C
    - Marks 60-69: Grade D      
    - Marks 50-59: Grade E
    - Marks below 50: Grade F
    If the marks are outside the range of 0-100, it prompts the user to enter valid marks.
    This program is useful for understanding how to use if-else statements in C to handle multiple conditions based on user input.
    */
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);    
    if(marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if(marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if(marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if(marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else if(marks >= 50 && marks < 60) {
        printf("Grade: E\n");
    } else if(marks >= 0 && marks < 50) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
    }
}