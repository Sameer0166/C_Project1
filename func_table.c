#include<stdio.h>
void printTable(int n); // printing the table which you want to exectue
int main()
{
    int n;
    printf("enter the tabe:");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
void printTable(int n){

    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
}