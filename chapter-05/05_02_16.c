#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void)
{
	// # Variables
	double side1, side2, hypotenuse, result;


	// # Input
	printf("Enter side1 side2 hypotenuse (0 for the side to calculate): ");
	scanf("%lf%lf%lf%*c", &side1, &side2, &hypotenuse);


	// # Logic
	if (hypotenuse == 0) {
		result = sqrt(side1 * side1 + side2 * side2);
	}
	else {
		result = side1 == 0 ? side2 : side1;
		result = sqrt(hypotenuse * hypotenuse - result * result);
	}



	// # Ouput
	printf("The missinge side is %lg\n", result);


	// # Exit
	return 0;
}