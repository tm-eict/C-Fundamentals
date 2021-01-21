#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned short int days;	// USHRT_MAX = 65535
	char c = 256;
	printf("%u\n", sizeof(days));
	printf("%u\n", sizeof(c));
	printf("%u\n", UCHAR_MAX);
	printf("%hhu\n", c);
	return 0;
	// Variables
	short int num;


	// Input
	printf("Enter a short integer: ");
	// NOTE: %hd -> short int
	scanf("%hd%*c", &num);


	// Output
	printf("\nYou entered: %hd, the max value is %hd\n", num, SHRT_MAX);
	

	
	// Exit
	return 0;
}