#include<stdio.h>
int main(){
    /*
    This program checks if a number is even or odd.
    It prompts the user to enter a number and then checks if the number is even or odd      
    using the modulus operator (%).
    If the number is even (i.e., divisible by 2), it prints "the given number is even".
    If the number is odd (i.e., not divisible by 2), it prints "the given number is odd".   
    This program is useful for understanding how to use the modulus operator in C to determine the parity of a number.  
    */
    int num;
printf("Enter a number:");
scanf("%d", &num);
printf("the given number is if output is 0 false and if it is 1 true= %d",num%2==0);
return 0;
}