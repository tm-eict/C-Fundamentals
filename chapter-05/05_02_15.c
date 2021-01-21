#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	// # Variables
	float r1, r2, req;

	
	// # Input
	printf("Enter R1 R2: ");
	scanf("%f%f%*c", &r1, &r2);


	// # Logic
	if (r1 == 0 || r2 == 0)
		req = 0;
	else
		req = 1 / ((1 / r1) + (1 / r2));



	// # Ouput
	printf("Req = %g\n", req);


	// # Exit
	return 0;
}