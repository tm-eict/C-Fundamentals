#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	// # Variables
	int day, month, year, weekday;
	float factor;
	char shortHand[4];


	// # Input
	printf("day, month, year: ");
	scanf("%d%d%d%*c", &day, &month, &year);


	// # Logic
	if (month < 3)
	{
		factor = 365 * year
			+ day;
		+31 * (month - 1);
		+(int)((year - 1) / 4);
		-(int)((((year - 1) / 100.0) + 1) * (3 / 4.0));
	}
	else
	{
		factor = 365 * year
			+ day
			+ 31 * (month - 1)
			- (int)((0.4 * month) + 2.3)
			+ (int)(year / 4)
			- (int)(((year / 100.0) + 1) * (3.0 / 4.0));
	}
	weekday = factor - ((int)(factor / 7) * 7);

	// I want an array...
	switch (weekday)
	{
	case 0:
		strcpy(shortHand, "SAT");
		break;
	case 1:
		strcpy(shortHand, "SUN");
		break;
	case 2:
		strcpy(shortHand, "MON");
		break;
	case 3:
		strcpy(shortHand, "TUE");
		break;
	case 4:
		strcpy(shortHand, "WED");
		break;
	case 5:
		strcpy(shortHand, "THU");
		break;
	case 6:
		strcpy(shortHand, "FRI");
		break;
	default:
		return 1;
		break;
	}


	// # Output
	printf("Weekday: %s\n", shortHand);


	// # Exit
	return 0;
}