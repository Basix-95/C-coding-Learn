/*Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.*/
#include <stdio.h>
int factorial(int n);
int main() {
    int n, r;
    printf("Enter values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);
    if (n < r || r < 0) {
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int binomial_coefficient = fact_n / (fact_r * fact_n_r);
    printf("C(%d, %d) = %d\n", n, r, binomial_coefficient);
    return 0;
}
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
