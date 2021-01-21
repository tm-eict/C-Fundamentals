#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	float R1, R2, U, I, V2;


	// Input
	printf("U: ");
	scanf("%f%*c", &U);

	printf("R1: ");
	scanf("%f%*c", &R1);

	printf("R2: ");
	scanf("%f%*c", &R2);


	// Logic
	I = U / (R1 + R2);
	V2 = I * R2;

	// Ouput
	printf("I: %f\n"
		"V2: %f\n", I, V2);



	// Exit
	return 0;
}
