/*Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers.
Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.*/
#include <stdio.h>
int gcd(int a, int b);
int fibo(int n);
int main() {
    int num1, num2, n, i;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    printf("Enter a number to generate Fibonacci sequence up to: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}