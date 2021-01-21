#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Constants & Variables
	const short int fiveHundred = 500;
	const short int twoHundred = 200;
	const short int hundred = 100;
	const short int fifty = 50;
	const short int twenty = 20;
	const short int ten = 10;
	const short int five = 5;
	const short int two = 2;
	const short int one = 1;

	int fiveHundreds, twoHundreds, hundreds, fifties, twenties, tens, fives, twos, ones;

	// Input
	printf("Money: ");
	scanf("%d%*c", &ones);

	// Logic
	// (500, 200, 100, 50, 20, 10, 5)
	// NOTE: Can replace (int)total with (int)seconds
	fiveHundreds = ones / fiveHundred;
	ones -= fiveHundreds * fiveHundred;

	twoHundreds = ones / twoHundred;
	ones -= twoHundreds * twoHundred;

	hundreds = ones / hundred;
	ones -= hundreds * hundred;

	fifties = ones / fifty;
	ones -= fifties * fifty;

	twenties = ones / twenty;
	ones -= twenties * twenty;

	tens = ones / ten;
	ones -= tens * ten;

	fives = ones / five;
	ones -= fives * five;

	twos = ones / two;
	ones -= twos * two;



	// Output
	printf(
		"500: %d\n"
		"200: %d\n"
		"100: %d\n"
		"50: %d\n"
		"20: %d\n"
		"10: %d\n"
		"5: %d\n"
		"1: %d\n"
		"2: %d\n", fiveHundreds, twoHundreds, hundreds, fifties, twenties, tens, fives, twos, ones);




	// Exit
	return 0;
}