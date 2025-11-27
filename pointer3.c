/*Wap to showcase double pointers*/
#include <stdio.h>
int main(void){
int m=46;
int *k=&m;
int *ptr;
ptr=k;


printf("Value at adress of k is:%d\n", (void *)&ptr); 
printf("Value at adress of m is:%d\n", *k);
    return 0;
}