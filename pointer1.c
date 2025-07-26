#include<stdio.h>
 int main(){
    char name='*';
    char *ptr=&name;
    char _new=*ptr;
    printf("the symbol of star is : %c",_new);
    return 0;
}