#include <stdio.h>

int main(){

int my_array[]={1,23,17,4,-5,100};
int your_array[]={0,1,2,3,5};
int *ptr;
int *ptr2;
ptr= &my_array[0];
ptr2= &your_array[0];

for(int i=0;i<6;i++){
    printf("Element %d\t: %d\n",i,*(ptr+i));
}
for(int i=0;i<5;i++){
    printf("Element %d: %d\t",i,*(ptr+i));
}



    return 0;
}