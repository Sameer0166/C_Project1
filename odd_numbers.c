#include<stdio.h>
int main(){
    /*
    This program prints all odd numbers between 5 and 50.
    It uses a for loop to iterate through the numbers from 5 to 50. 
    In each iteration, it checks if the current number is odd (i.e., not divisible by 2).
    If the number is odd, it prints the number.
    This is a simple demonstration of how to use a for loop in C to perform repetitive tasks, specifically for filtering odd numbers.
    The program is useful for understanding the basic structure of a for loop, including initialization, condition,
    incrementing the loop variable, and using a conditional statement to filter specific values.
    */
    int i;
    for(i=5;i<=50;i++){
        if(i%2!=0){
printf("%d is an odd number\n", i);

    }
}
return 0;
}