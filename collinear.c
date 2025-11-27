//check for collinearity

#include <stdio.h>

int main(){
  
int x1,y1,x2,y2,x3,y3;
float c;
printf("Enter three points:");
scanf("%d %d %d %d %d %d", &x1, &y1, &x2 , &y2 , &x3 , &y3);


c=1/2*x1*(y2-y1)-x2*(y1-y3)+x3*(y1-y2);
if(c == 0.0){
    printf("Collinear");
} else{
    printf("Non Collinear");
}

    return 0;
}