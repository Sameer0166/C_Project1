#include<stdio.h>
int main(){
    int i;
    int *ptr=&i; // here value of i is storedin the ptr.Here the value of *ptr will be "i"
    int **pptr=&ptr;// here one address of the ptr is stored in the another new ptr " **pptr " 
    // here the value of **pptr will be " i" value 
    printf("enter the value of i :");
    scanf("%d",&i);
    printf("the value at pointer to pointer **pptr is : %d",**pptr);
    return 0;
}