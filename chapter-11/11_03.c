#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int readSeconds();
void calculate(unsigned int*, unsigned short int*, unsigned char*, unsigned char*);

int main(void)
{
	// # Variables
	unsigned int seconds;	// UINT_MAX = 4294967295 (4 bytes)
	unsigned short int days;	// USHRT_MAX = 65535
	unsigned char minutes, hours;	// UCHAR_MAX = 255

	// # Input
	printf("Enter a time in seconds: ");
	scanf("%u%*c", &seconds);

	// Logic
	calculate(&seconds, &days, &minutes, &hours);

	// # Output
	printf("%hu days, %02hhu:%02hhu:%02u\n", days, hours, minutes, seconds);

	// # Exit
	return 0;
}

void calculate(unsigned int *seconds, unsigned short int *days, unsigned char *minutes, unsigned char *hours)
{
	const unsigned char secondsInMinute = 60;	// 60
	const unsigned short int secondsInHour = secondsInMinute * 60;	// 3600
	const unsigned int secondsInDay = secondsInHour * 24;	// 86400

	*days = *seconds / secondsInDay;
	*hours = (*seconds % secondsInDay) / secondsInHour;
	*minutes = (*seconds % secondsInHour) / secondsInMinute;
	*seconds = (*seconds % secondsInMinute);
}
