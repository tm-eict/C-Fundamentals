#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float wheight, height, bmi;


	// # Input
	printf("What is your length(m)? ");
	scanf("%f%*c", &height);
	printf("What is your wheigt(kg)? ");
	scanf("%f%*c", &wheight);



	// # Logic
	bmi = wheight / (height * height);

	if (bmi < 18.5)
		printf("You are underweight\n");
	else if (18.5 <= bmi && bmi < 25)
		printf("You have a normal wheight\n");
	else if (bmi >= 30)
		printf("You have obesity\n");
	else
		printf("You are overweight ");


	// # Exit
	return 0;
}