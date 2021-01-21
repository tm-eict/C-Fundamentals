#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int isLeapYear(int year);
int numberOfDays(int month, int year);


int main(void)
{
	// # Variables
	int month, year;


	// # Input
	printf("Enter (int)month, (int)year: ");
	scanf("%d%d*c", &month, &year);


	// Output & Logic
	printf("month %d of %d has %d days\n", month, year, numberOfDays(month, year));


	// # Exit
	return 0;
}


int isLeapYear(int year)
{
	return (((year % 4 == 0) && (year % 100)) || (year % 400 == 0)) ? 1 : 0;
}

int numberOfDays(int month, int year)
{
	int days;

	if (month == 2)
		days = 28 + isLeapYear(year);
	else
	{
		if (month > 7)
			month++;
		days = (month % 2) ? 31 : 30;
	}

	return days;
}
