/*Wap using swap function with the following function header*/

#include <stdio.h>

void swap(int *x, int *y){

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
};

int main(void){
    int a=10;
    int *ptr1;
    int *ptr2;
    int b=20;
    ptr1=&a;
    ptr2=&b;
    printf("Before swapping: a=%d, b=%d\n", *ptr1, *ptr2);
    swap(&*ptr1, &*ptr2);
    printf("After swapping: a=%d, b=%d\n", *ptr1, *ptr2);
    return 0;
}