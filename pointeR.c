/*Wap : Declare different types of pointers(int, char, float) and initialize them with the address of variables.Print the values for both the pointers and the variables they point to*/

#include <stdio.h>

int main(){

int x[]={10,20,30,40,50};
int *p;
int size1=sizeof(x)/sizeof(x[0]);

for(int i=0;i<size1;i++){
    p=&x[i];
    printf("Value of x[%d]=%d\n",i,*p);
}
int address1=(int)&p;
printf("Address of pointer 1: %d\n",address1);

char ch[]={'a','b','c'};
char *p1;
int size2=sizeof(ch)/sizeof(ch[0]);
for(int i=0;i<size2;i++){
    p1=&ch[i];
    printf("Value of ch[%d]=%c\n",i,*p1);
}
int address2=(int)&p1;
printf("Address of pointer 2:%d\n",address2);

float f[]={1.1,2.2,3.3};
float *p2;
int size3=sizeof(f)/sizeof(f[0]);
for(int i=0;i<size3;i++){
    p2=&f[i];
    printf("Value of f{%d}=%.1f\n",i,*p2);
}
int address3=(int)*p2;
printf("Address of pointer 3:%d\n",address3);










    return 0;
}