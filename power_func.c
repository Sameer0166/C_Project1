#include<stdio.h>
#include<math.h>
int main(){
    float x,n,p;
    printf("enter the number to you want to find the square or cube : ");
    scanf("%2f",&x);
     printf("enter the power to you want to find the square or cube : ");
    scanf("%2f",&n);
p=pow(x,n);
    printf("The value of the %2f^%2f= %2f",x,n,p);
 return 0;   
}