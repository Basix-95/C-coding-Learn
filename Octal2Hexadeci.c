//wap to convert octal to hexadecimal//
#include <stdio.h>

int main() {
    int octal, decimal = 0, i = 0, rem;
    char hex[20];
    printf("Enter an octal number: ");
    scanf("%d", &octal);

  
    int temp = octal;
    while (temp != 0) {
        rem = temp % 10;
        decimal += rem * (1 << (3 * i)); 
        temp /= 10;
        i++;
    }
    printf("Decimal: %d\n", decimal);


   
    int j = 0;
    temp = decimal;
    if (temp == 0) {
        hex[j++] = '0';
    } else {
        while (temp != 0) {
            rem = temp % 16;
            if (rem < 10)
                hex[j++] = rem + '0';
            else
                hex[j++] = rem - 10 + 'A';
            temp /= 16;
        }
    }
    hex[j] = '\0';

    printf("Hexadecimal: ");
    for (int k = j - 1; k >= 0; k--) {
        printf("%c", hex[k]);
    }
    printf("\n");

    return 0;
}