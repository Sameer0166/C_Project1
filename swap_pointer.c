#include<stdio.h>
void _swap(int *x,int *y);
int main()
{
    int x=4,y=5;
    _swap(&x,&y);
    printf("x=%d & y=%d ",x,y);
    return 0;
}
void _swap(int *x, int *y){
    int z=*x;
    *x=*y;
    *y=z;

}