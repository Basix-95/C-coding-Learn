/*Wap to compute postive, negative and zero numbers from input*/
#include <stdio.h>
int main() {
    int n, positive = 0, negative = 0, zero = 0;
    char choice;
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n > 0) {
            positive++;
        } else if (n < 0) {
            negative++;
        } else {
            zero++;
        }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    return 0;
}
