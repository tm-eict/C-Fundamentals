#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	int hours, mins, seconds;


	// Input
	printf("Enter hours mins seconds (space inbetween): ");
	scanf("%d%d%d%*c", &hours, &mins, &seconds);


	// Output
	printf("The entered time is: %02d hours %02d minutes and %02d seconds", hours, mins, seconds);


	// Exit
	return 0;
}