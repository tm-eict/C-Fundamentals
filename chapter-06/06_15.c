#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dayOfYear(int day, int month, int year);


int main(void)
{
	// # Variables
	int day, month, year, date1, date2, diff;


	// # Input & Logic
	printf("Enter date 1 (dd mm yyyy): ");
	scanf("%d%d%d%*c", &day, &month, &year);
	date1 = dayOfYear(day, month, year);

	printf("Enter date 2 (dd mm yyyy): ");
	scanf("%d%d%d%*c", &day, &month, &year);
	date2 = dayOfYear(day, month, year);

	diff = date2 - date1;


	// # Ouput
	printf("days difference: %d", diff);



	// # Exit
	return 0;
}



int dayOfYear(int day, int month, int year)
{
	/*
	// TODO: Put into one-liner?
	int factor;

	if (month < 3)
		factor = 365 * year
		+ day
		+ 31 * (month - 1)
		+ (year - 1) / 4
		+ (int)((int)((year - 1) / 100.0 + 1) * (3 / 4.0));
	else
		factor = 365 * year
		+ day
		+ 31 * (month - 1)
		- (int)(0.4 * month + 2.3)
		+ year / 4
		- (int)((year / 100 + 1) * (3 / 4.0));

	return factor;
	*/

	return 365 * year + day + 31 * (month - 1) +
		((month < 3) ?
			+ (year - 1) / 4
			+ (int)((int)((year - 1) / 100.0 + 1) * (3 / 4.0))
		:
			- (int)(0.4 * month + 2.3)
			+ year / 4
			- (int)((year / 100 + 1) * (3 / 4.0)));

}
