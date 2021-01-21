#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int sSeconds, sMinutes, sHours, eSeconds, eMinutes, eHours, seconds, minutes, hours;

	// # Input
	printf("Enter the start time(hour min sec): ");
	scanf("%d%d%d%*c", &sHours, &sMinutes, &sSeconds);

	printf("Enter the end time(hour min sec): ");
	scanf("%d%d%d%*c", &eHours, &eMinutes, &eSeconds);

	// # Logic
	seconds = eSeconds - sSeconds;
	minutes = eMinutes - sMinutes;
	hours = eHours - sHours;

	if (hours < 0)
		hours += 24;
	if (minutes < 0) {
		minutes += 60;
		hours--;
	}
	if (seconds < 0) {
		seconds += 60;
		minutes--;
	}

	printf("Time difference: %d hours, %02d minutes and %d seconds\n", hours, minutes, seconds);
	

	// # Exit
	return 0;
}