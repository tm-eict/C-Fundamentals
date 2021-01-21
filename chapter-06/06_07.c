#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printline(int, char);

int main(void)
{
	// # Output
	printline(5, 'a');
	printline(-5, 'b');

	// # Exit
	return 0;
}

void printline(int n, char c)
{
	// Use the absolute value of n
	n = (n >= 0) ? n : -n;

	for (; n; --n)
		printf("%c", c);
	printf("\n");
}