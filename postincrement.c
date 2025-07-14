#include<stdio.h>
int main(){
    /*  
    This program demonstrates the use of the post-increment operator in C.
    It initializes an integer variable 'i' to 1, prints its value using the post
    increment operator, and then prints the value of 'i' again after the increment.
    The post-increment operator (i++) increases the value of 'i' by 1
    after its current value has been used in the expression.
    This is a simple demonstration of how to use the post-increment operator in C.
    The program is useful for understanding how the post-increment operator works,
    */
    int i=1;
    printf("%d\n",i++);
    printf("%d",i);
    return 0;
}