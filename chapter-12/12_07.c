#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void printBinary(short int number);
short int pseudoRandomShort();

int main(void)
{

	// # Output & Logic
	for (int i = 0; i < 10; i++)
	{
		printf("%hd\n", pseudoRandomShort());
	}

	// # Exit
	return 0;
}

short int pseudoRandomShort()
{
	static short int seed = 16684;

	short int bit13, bit14, res;

	// Perform a XOR operation on the bits 14 and 13
	bit13 = seed >> 12 & 0x0001;
	bit14 = seed >> 13 & 0x0001;
	res = bit13 ^ bit14;

	// Shift the number 1 bit to the left and fill the rightmost bit with the result of the XOR operation
	// Make sure bit 15 remains 0 (to keep the number in the correct range)
	seed = seed << 1;
	seed = res | seed;
	seed = seed & 0x7FFF;

	res = seed;
	// Pseudo randomize seed
	seed = ~(seed ^ ((seed << (seed % 15)) & (seed >> (15 - (seed % 15))))) & 0x7FFF;

	return res;
}

void printBinary(short int number)
{
	int bit;

	for (int i = 15; i >= 0; i--)
	{
		printf("%d", number >> i & 0x0001);

		if (i % 4 == 0)
			printf(" ");
	}
	puts("");
}
