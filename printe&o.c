/*Wap to print all  even and odd numbers from 1 to 100 using for,while and do while*/
#include <stdio.h>
int main(){
int i=0;
printf("Using for loop:\n");
printf("Even numbers from 1 to 100:\n");
for(i=1;i<=100;i++){
    if(i%2==0){
    printf("%d\n", i);
    }
}
printf("Odd numbers from 1 to 100:\n");
i=1;
for(i=1;i<=100;i++){
    if(i%2!=0){
    printf("%d\n", i);
    }
}
printf("Using while loop:\n");
printf("Even numbers from 1 to 100:\n");
i=1;
while(i<=100){
    if(i%2==0){
    printf("%d\n", i);
    }
    i++;
}
printf("Odd numbers from 1 to 100:\n");
i=1;
while(i<=100){
    if(i%2!=0){
    printf("%d\n", i);
    }
    i++;
}
printf("Using do while loop:\n");
printf("Even numbers from 1 to 100:\n");
i=1;
do{
    if(i%2==0){
    printf("%d\n", i);
    }
    i++;
}while(i<=100);
printf("Odd numbers from 1 to 100:\n");
i=1;
do{
    if(i%2!=0){
    printf("%d\n", i);
    }
    i++;
}while(i<=100);

printf("Done");
    return 0;
}