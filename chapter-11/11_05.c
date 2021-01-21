#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WEEKLENGTH 7

void calcPrint(float[][2], char* [WEEKLENGTH]);
void readTemps(float[][2], char* [WEEKLENGTH]);
void printExtremes(float[][2], char* []);

int main(void)
{
	// # variables
	float temps[WEEKLENGTH][2];
	//float temps[WEEKLENGTH][2] = { {5, -1.5}, {5.5, -.5}, {7, 0}, {6, -1}, {7.5,0}, {8,1}, {8.5, 1.5} };
	const char* days[WEEKLENGTH] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };


	// Input
	printf("Enter the temperatures for each day of the week,\n"
		"first day temp then night temp (seperated by a space).\n");
	readTemps(temps, days);


	// # Outptuted
	calcPrint(temps, days);
	printExtremes(temps, days);

	// # Exit
	return 0;
}


void calcPrint(float temps[][2], char* days[WEEKLENGTH])
{
	char a, b;

	// Header
	printf("%-7s", "");
	for (int i = 0; i < WEEKLENGTH; i++)
		printf("%-6.3s", days[i]);

	// Todo: reduce ifs
	// Days temps
	printf("\nDay%-3s", "");
	for (int i = 0; i < WEEKLENGTH; i++)
		if (temps[i][0] < 0)
			printf("%c%-5.1f%c", '\0', temps[i][0], ' ');
		else
			printf("%c%-5.1f%c", ' ', temps[i][0], '\0');


	// Night temps
	printf("\nNight ");
	for (int i = 0; i < WEEKLENGTH; i++)
		if (temps[i][1] < 0)
			printf("%c%-5.1f%c", '\0', temps[i][1], ' ');
		else
			printf("%c%-5.1f%c", ' ', temps[i][1], '\0');
	puts("");
}

void readTemps(float temps[][2], char* days[WEEKLENGTH])
{
	for (int i = 0; i < WEEKLENGTH; i++)
	{
		printf("%s: ", days[i]);
		scanf("%f%f%*c", &temps[i][0], &temps[i][1]);
	}
}

void printExtremes(float arr[][2], char* days[])
{
	unsigned char minD, maxD, minN, maxN;

	minD = maxD = minN = maxN = 0;

	for (int i = 0; i < WEEKLENGTH; i++)
	{
		if (arr[i][0] < minD)
			minD = i;
		else if (arr[i][0] > maxD)
			maxD = i;

		if (arr[i][1] < minN)
			minN = i;
		else if (arr[i][1] > maxN)
			maxN = i;
	}
	
	printf("\nMin:\tNight:\t%.3s = %c%-2.1f\n"
		"\t\Day:\t%.3s = %c%-2.1f\n"
		"Max:\tNight:\t%.3s = %c%-2.1f\n"
		"\t\Day:\t%.3s = %c%-2.1f\n",
		days[maxN], arr[maxN][1] < 0 ? '\0' : ' ', arr[maxN][1],
		days[minD], arr[minD][0] < 0 ? '\0' : ' ', arr[minD][0],
		days[minN], arr[minN][1] < 0 ? '\0' : ' ', arr[minN][1],
		days[maxD], arr[maxD][0] < 0 ? '\0' : ' ', arr[maxD][0]);
}
