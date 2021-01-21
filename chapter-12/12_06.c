#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printBinary(short int, unsigned char);

int main(void)
{
	// # Variables
	char num, msb, lsb;

	// # Input
	printf("Please enter a value (1byte) of the CANSPI MCP2515 chip\n"
		"(the register value is an integer from [-127, 127]): ");
	scanf("%hhi%*c", &num);

	// Output & Logic
	msb = num >> 6 & 0x03;
	lsb = num & 0x3F;

	printf("---------------------------------------------------------\n\n"
		"The above register has a Hex Value of: %X and a Bit Value of: ", num);
	printBinary(num, 8);
	printf("The \"Synchronization Jump Width Length bits\" is:\n"
		"Hex Value: %X\t\tBit Value: ", msb);
	printBinary(msb, 2);

	printf("The \"Baud Rate Prescaler bits\" is:\n"
		"Hex Value: %X\t\tBit Value: ", lsb);
	printBinary(lsb, 6);


	// # Exit
	return 0;
}

void printBinary(short int number, unsigned char n)
{
	int bit;

	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d", number >> i & 0x0001);

		if (i % 4 == 0)
			printf(" ");
	}
	puts("");
}
