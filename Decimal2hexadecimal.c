//wap to convert  decimal to hexadecimal//


#include <stdio.h>
#include <math.h>
int main() {
    int decimal, rem, i = 0;
    char hex[20];
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

   
    int temp = decimal;
    if (temp == 0) {
        hex[i++] = '0';
    } else {
        while (temp != 0) {
            rem = temp % 16;
            if (rem < 10)
                hex[i++] = rem + '0';
            else
                hex[i++] = rem - 10 + 'A';
            temp /= 16;
        }
    }
    hex[i] = '\0';

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}