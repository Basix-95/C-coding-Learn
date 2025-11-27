//Wap to convert binary to octal.
#include <stdio.h>

int main() {
    int binary, decimal = 0, octal = 0, rem, base = 1, temp;

    printf("Enter Binary value: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    temp = binary;
    base = 1;
    while (temp > 0) {
        rem = temp % 10;
        decimal += rem * base;
        base *= 2;
        temp /= 10;
    }
    printf("Decimal Value: %d\n", decimal);

    // Convert decimal to octal
    base = 1;
    while (decimal > 0) {
        rem = decimal % 8;
        octal += rem * base;
        base *= 10;
        decimal /= 8;
    }
    printf("Octal Value: %d\n", octal);

    return 0;
}