#include <stdio.h>
#include<stdbool.h>

int main(){

    int a=2, c=1, b,d;
    b=a < c;
    d= (a > b) && (c < b);
    printf("%d", &d);







    return 0;
}