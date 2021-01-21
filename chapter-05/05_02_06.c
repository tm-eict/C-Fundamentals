#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	unsigned int speed, max, over;
	float fine;


	// # Input
	printf("Be aware! Speeding is heavily fined!"
		"Enter your speed: ");
	scanf("%ud%*c", &speed);
	printf("Enter the speed limit: ");
	scanf("%ud%*c", &max);


	// # Logic & Ouput
	if (speed <= max)
		printf("you weren't speeding\n");
	else
	{
		over = speed - max;
		fine = over * 2.5;
		printf("Your speed is %d km/h over the speed limit.\n", over);
		printf("Your fine amounts %.1f euro.\n", fine);
	}


	// # Exit
	return 0;
}