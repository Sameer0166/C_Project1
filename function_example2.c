#include<stdio.h>
void indian();
void french();
int main()
{
    char ch,f;
    printf("enter the f for french and i for indian:");
    scanf("%c",&ch);
    if(ch=='f')
    {
       french();
    }
    else if (ch=='i')
    {
         indian();     
    }
    else if(ch!='i'&&ch!='f')
    {
    printf("enter i or f\nenter the valid country");
    }
    else
    {
        printf("enter the valid country");
    }
    return 0;
}
    void indian()
    {
    printf("namaste\n");  
    }
    void french()
    {
    printf("bonjour\n");
    }