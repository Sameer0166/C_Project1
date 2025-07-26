#include<stdio.h>
int factorial(int n);
int main()
{
    printf("factorial is : %d",factorial(6));
    return 0;
}
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    int factnum=factorial(n-1);
    int fact=factnum*n;
    return fact;
}