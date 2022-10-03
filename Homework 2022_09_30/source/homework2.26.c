#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num1;
	int num2;
	printf("please enter two integers\n");

	scanf("%d%d", &num1, &num2);

	if (num1%num2 == 0)
	{
		printf("%d is multiple of %d", num1, num2);
	}
	else
	{
		printf("%d is not multiple of %d", num1, num2);
	}

}