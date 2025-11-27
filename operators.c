/*Wap to understand the useage of operators in C*/
#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int sum, diff, prod;
    float quot;
    int  mod;
    sum = a + b;
    diff = b - a;
    prod = a * b;
    quot = (float)b / a;
    mod = b % a;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);
    printf("Modulus: %d\n", mod);
    return 0;
}