#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int bday, bmonth, byear, cday, cmonth, cyear, days, months, years;

	// # Input
	printf("Enter the current date(d m y): ");
	scanf("%d%d%d%*c", &cday, &cmonth, &cyear);

	printf("Enter the birth date(d m y): ");
	scanf("%d%d%d%*c", &bday, &bmonth, &byear);


	// # Logic
	years = cyear - byear;
	months = cmonth - bmonth;
	days = cday - bday;

	if (days < 0)
		months--;

	if (months < 0) {
		years--;
		months += 12;
	}


	// # Output
	printf("Your age is: %d years and %d months\n", years, months);


	// # Exit
	return 0;
}