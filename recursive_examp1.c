#include<stdio.h>
int sumofnnaturalnum(int n);
int main(){
    printf(" The sum is = %d",sumofnnaturalnum(10));
    return 0;
}
int sumofnnaturalnum(int n){
    if(n==1){
        return 1;
    }
    int sumnum1=sumofnnaturalnum(n-1);
    int sum1=sumofnnaturalnum(n-1)+n;
    return sum1;
}