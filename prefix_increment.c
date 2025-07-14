#include<stdio.h>
int main(){
    /*  
    This program demonstrates the use of the pre-increment operator in C.
    It initializes an integer variable 'j' to 1, prints its value using the pre
    increment operator, and then prints the value of 'j' again after the increment.
    The pre-increment operator (++j) increases the value of 'j' by 1
    before its current value is used in the expression.
    This is a simple demonstration of how to use the pre-increment operator in C.
    The program is useful for understanding how the pre-increment operator works,\
    */
    int j=1;
    printf("%d\n",++j);
    printf("%d",j);
}