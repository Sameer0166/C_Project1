#include<stdio.h>
void marks(int *a, int *b);
int main()
{
    int a=100,b=98;
 marks(&a,&b);//function calling 
 printf("marks after swapping of a = %d & b= %d",a,b);
}
void marks(int *a, int *b){//function defination
     int c=*a;// here c is the temp variable to store the values of and b
     *a=*b; 
     *b=c;


}