#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	int num, sum;


	// Input
	printf("Enter number 1: ");
	scanf("%d%*c", &sum);

	printf("Enter number 2: ");
	scanf("%d%*c", &num);
	sum += num;

	printf("Enter number 3: ");
	scanf("%d%*c", &num);
	sum += num;

	printf("Enter number 4: ");
	scanf("%d%*c", &num);
	sum += num;

	printf("Enter number 5: ");
	scanf("%d%*c", &num);
	sum += num;


	// Output
	printf("Sum = %d\n"
		"Mean = %.2f", sum, sum / 5.0);



	// Exit
	return 0;
}