#include<stdio.h>
int pointer();
int main(){
   pointer();
    return 0;
}
int pointer()
{
 int number=834187;
    int *ptr=&number;
    int _newNumber=*ptr;
    printf("The new number is %d\n",_newNumber);
    printf("address of the number : %u\n",&number);
        printf("pointer %p\n",ptr);
        printf("address of the pointer is : %p\n",&ptr);
            printf("address of the new number is : %p\n",&_newNumber);
            // "%p"=> is used for the printing the address of a variable
            // the output will be in the hexadecimal value
            // "%d" => is same as %p but it shows the address output in the int values
}
/*
The function pointer() declares an integer variable number and assigns it a value.
It then creates a pointer ptr that stores the address of number.
The value pointed to by ptr is assigned to _newNumber.
Finally, it prints _newNumber, which is the same as number.
This demonstrates how to use pointers to access and copy the value of a variable in C.*/