#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int num1;
	float num2;
	float num4;

	printf("BMI calculater\n");
	printf("please enter your weightInKilograms\n");
	scanf("%d", &num1);
	printf("please enter your heightInMeters\n");
	scanf("%f", &num2);
	num4 = num1/(num2 * num2);
	printf("your BMI is %f \n", num4);
	printf("BMI VALUES\n");
	printf("Underweignt: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Oveerwight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater");
}