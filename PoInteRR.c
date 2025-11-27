/*Wap to define a function that accepts pointers as parameters, pass variables by reference using pointers and mody their values withing the function*/
#include <stdio.h>
void function(int *a, float *b, char *c){
    *a = *a + 10;
    *b = *b + 5.5;
    *c = *c + 2;
}

int main(){
    int x = 20;
    float y = 10.5;
    char z = 'A';

    printf("Before function call:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    function(&x, &y, &z);

    printf("After function call:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    return 0;
}