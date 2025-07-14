#include<stdio.h>
int main(){
    int j;
    /*
    This program uses a for loop to print numbers from 0 to 9.
    The for loop initializes the variable 'j' to 0 and continues to execute the loop
    as long as 'j' is less than or equal to 9.
    In each iteration, it prints the current value of 'j' and increments 'j'
    by 1.
    This is a simple demonstration of how to use a for loop in C to repeat a block of code multiple times.
    The program is useful for understanding the basic structure of a for loop, including initialization, condition
    and incrementing the loop variable.
    */
    for (j=0;j<=9;++j)
    {
        printf("%d\n",j);
    }
    return 0;
}