/*WAP to print all numbers from 1 to 100 using for,while and do while.*/
#include <stdio.h>
int main(){
int i=0;
printf("Using for loop:\n");
for(i=1;i<=100;i++){
    printf("%d\n", i);
}
printf("Using while loop:\n");
i=1;
while(i<=100){
    printf("%d\n", i);
    i++;
}
printf("Using do while loop:\n");
i=1;
do{
    printf("%d\n", i);
    i++;
}while(i<=100);
printf("Done");





    return 0;
}