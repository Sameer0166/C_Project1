#include<stdio.h>
int main(){
    int marks=90;
    int *ptr=&marks;
    int newmarks=*ptr;
    printf("the marks is : %d\n",marks);
    printf("the value at the address *ptr is : %d\n",&ptr);
    printf("the address of operator is &marks is : %d\n",&marks);
    printf("*ptr is  %d = %d\n",*ptr,&marks);
    printf("the address of operator is newmarks %d and value at address pointer  is : %d ",&newmarks,newmarks);
    return 0;
}