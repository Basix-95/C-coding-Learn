#include <stdio.h>

int main() {
	char op;
	double 	num1, num2;

	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &op);
	
	printf("enter 1st number:");
	scanf("%lf", &num1);

	printf("enter 2nd number");
	scanf("%lf", &num2);



	switch (op) {
        case '+':
            printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
            break;

	 case '-':
            printf("%lf - %lf = %lf", num1, num2, num1 - num2);
            break;
	
	 case '*':
	    printf("%lf * %lf = %lf", num1, num2, num1 * num2);
	    break;
	
	case '/':
	    printf("%lf / %lf = %lf", num1, num2, num1 / num2);
	    break;



	}

	

	return 0;
}
