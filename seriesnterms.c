/*Wap to find the sum of series upto n terms*/
#include <stdio.h>
int main(){
int i,n;
float sum=0.0;
printf("Enter the number of terms:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    sum=sum+(float)1/i;
    }
printf("The sum of series upto %d terms is: %f\n", n,sum);
  return 0;
}