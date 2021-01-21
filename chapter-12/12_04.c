#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

short rotate(short);


int main(void)
{
	// # Variable
	short number;

	// # Input
	printf("Geef een geheel getal: ");
	scanf("%hd%*c", &number);

	// # Output & Logic
	printf("Given number: %X\n\n", number);
	number = rotate(number);

	printf("The rotated number is: %X\n", number);


	// # Exit
	return 0;
}

short rotate(short number)
{
	short rotated, msb;

	// Get the first 4 bits
	msb = number >> 12;
	msb &= 0x000f;

	// get the last 4 bits
	rotated = number << 4;

	// Combine them
	return rotated | msb;
}
