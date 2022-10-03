#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;

	printf("please enter your Total miles driven per day.");
	scanf("%f", &num1);
	printf("please enter your Cost per gallon of gasoline.");
	scanf("%f", &num2);
	printf("please enter your Average miles per gallon.");
	scanf("%f", &num3);
	printf("please enter your Parking fees per day.");
	scanf("%f", &num4);
	printf("please enter your Tolls per day.");
	scanf("%f", &num5);
	num6 = (num1 / num3)*num2 + num4 + num5;
	printf("Your total expense is %f", num6);

}