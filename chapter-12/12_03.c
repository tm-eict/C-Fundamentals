#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printNibbles(short int);

int main(void)
{
	// # Variable
	short int num;


	// # Input
	printf("input:\t");
	scanf("%hd", &num);

	// # Ouput
	printf("output:\t");
	printNibbles(num);
	puts("");


	// # Exit
	return 0;
}

void printNibbles(short int number)
{	
	for (char i = 12; i >= 0; printf("%d ", number >> i & 0x000F), i-=4);
}
