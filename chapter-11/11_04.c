#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void calculate(float*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);

int main(void)
{
	// Thank god for regex seach and replace
	// # Variables
	float total;
	int fiveHundreds, twoHundreds, hundreds, fifties, twenties, tens, fives, twos, ones, fiftyCents, twentyCents, tenCents, fiveCents, twoCents, cents;


	// Input
	printf("Money: ");
	scanf("%f%*c", &total);


	// Logic
	calculate(&total, &fiveHundreds, &twoHundreds, &hundreds, &fifties, &twenties, &tens, &fives, &twos, &ones, &fiftyCents, &twentyCents, &tenCents, &fiveCents, &twoCents, &cents);


	// Output
	printf(
		"500: %d\n"
		"200: %d\n"
		"100: %d\n"
		"50: %d\n"
		"20: %d\n"
		"10: %d\n"
		"5: %d\n"
		"2: %d\n"
		"1: %d\n"
		"0.5: %d\n"
		"0.2: %d\n"
		"0.1: %d\n"
		"0.05: %d\n"
		"0.02: %d\n"
		"0.01: %d\n", fiveHundreds, twoHundreds, hundreds, fifties, twenties, tens, fives, twos, ones, fiftyCents, twentyCents, tenCents, fiveCents, twoCents, cents);


	// # Exit
	return 0;
}

void calculate(float* total, int* fiveHundreds, int* twoHundreds, int* hundreds, int* fifties, int* twenties, int* tens, int* fives, int* twos, int* ones, int* fiftyCents, int* twentyCents, int* tenCents, int* fiveCents, int* twoCents, int* cents)
{
	const short int fiveHundred = 500;
	const short int twoHundred = 200;
	const short int hundred = 100;
	const short int fifty = 50;
	const short int twenty = 20;
	const short int ten = 10;
	const short int five = 5;
	const short int two = 2;
	const short int one = 1;
	const short int fiftyCent = 50;
	const short int twentyCent = 20;
	const short int tenCent = 10;
	const short int fiveCent = 5;
	const short int twoCent = 2;
	const short int cent = 1;


	*ones = *total;
	*cents = (int)(*total * 100) % 100;

	*fiveHundreds = *ones / fiveHundred;
	*ones -= *fiveHundreds * fiveHundred;

	*twoHundreds = *ones / twoHundred;
	*ones -= *twoHundreds * twoHundred;

	*hundreds = *ones / hundred;
	*ones -= *hundreds * hundred;

	*fifties = *ones / fifty;
	*ones -= *fifties * fifty;

	*twenties = *ones / twenty;
	*ones -= *twenties * twenty;

	*tens = *ones / ten;
	*ones -= *tens * ten;

	*fives = *ones / five;
	*ones -= *fives * five;

	*twos = *ones / two;
	*ones -= *twos * two;

	*fiftyCents = *cents / fiftyCent;
	*cents -= *fiftyCents * fiftyCent;

	*twentyCents = *cents / twentyCent;
	*cents -= *twentyCents * twentyCent;

	*tenCents = *cents / tenCent;
	*cents -= *tenCents * tenCent;

	*fiveCents = *cents / fiveCent;
	*cents -= *fiveCents * fiveCent;

	*twoCents = *cents / twoCent;
	*cents -= *twoCents * twoCent;
}