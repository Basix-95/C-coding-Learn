/*WAP to find the type and area of a triangle.*/
#include <stdio.h>
#include <math.h>

int triangle_type(float a, float b, float c);
float triangle_area(float a, float b, float c);

int main() {
    float side1, side2, side3, area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    triangle_type(side1, side2, side3);
    area = triangle_area(side1, side2, side3);

    if (area != -1) {
        printf("Area of the triangle: %.2f\n", area);
    }

    return 0;
}

int triangle_type(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths.\n");
        return -1;
    }
    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
    return 0;
}

float triangle_area(float a, float b, float c) {
   
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do not form a valid triangle.\n");
        return -1;
    }

    float s = (a + b + c) / 2; 
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}