/*WAP program to raise a floating point number to an integer power. use user defined function such as power*/
#include <stdio.h>
#include <math.h>
float base_power(float x, int y);
int main() {
    float base, result;
    int exponent;
    printf("Enter base (floating point number): ");
    scanf("%f", &base);
    printf("Enter exponent (integer): ");
    scanf("%d", &exponent);
    result = base_power(base, exponent);
    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, result);
    return 0;
}
float base_power(float base, int exponent) {
    return pow(base, exponent);
}
