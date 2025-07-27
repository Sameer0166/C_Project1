#include<stdio.h>
int main(){
    int id=545;
    int *pointer=&id;//creating a pointer and storing the address of id in the pointer 
    int _id1=*pointer;
    //creating a new variable and storing the value at address pointer.
    //Here value at address becomes 545
    printf(" the address of oprator at %d value is %d\n address of id is : %d\n value at address of pointer is : %d",&pointer,_id1,&id,*pointer); 
    return 0;    
}