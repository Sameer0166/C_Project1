#include<stdio.h>
void calculator(int a,int b,int *sum,int *prod, int *avg);
int main()
{
    int a=3,b=5;
    int sum,prod,avg;
    calculator(a,b,&sum,&prod,&avg);
    printf("%d\n%d\n%d",sum,prod,avg);
    return 0;
}
void calculator (int a ,int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}