#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	// # Variables
	short number, offset, bit;


	// # Input
	printf("Give an int: ");
	scanf("%hd%*c", &number);


	// # Output & Logic
	for (int i = 15; i >= 0; i--)
	{
		offset = number >> i;
		bit = offset & 0x0001;
		printf("%hd", bit);
		if (i % 4 == 0)
			printf(" ");
	}

	// # Exit
	return 0;
}

/*
	1010 0000 0011 0101

	1111 1111 1111 1111
&	0000 0000 0000 0001
=	0000 0000 0000 0001
*/