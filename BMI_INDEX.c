//wap to input bmi and output the codition of the person\

#include <stdio.h>

int main() {
    float bmi;
    printf("Enter the BMI score: ");
    scanf("%f", &bmi);

if (bmi < 15.1) {
    printf("Starvation\n");
} else if (bmi >= 15.1 && bmi < 17.5) {
    printf("Anorexic\n");
} else if (bmi >= 17.5 && bmi < 18.5) {
    printf("Underweight\n");
} else if (bmi >= 18.5 && bmi < 25) {
    printf("Ideal\n");
} else if (bmi >= 25 && bmi < 30) {
    printf("Overweight\n");
} else if (bmi >= 30 && bmi < 40) {
    printf("Obese\n");
} else if (bmi >= 40) {
    printf("Morbidly Obese\n");
} else {
    printf("Wrong value entered\n");
}
    return 0;


}