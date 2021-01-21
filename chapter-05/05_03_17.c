#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Constants & Variables
	const char rectangle = 219;
	int currentWidth, width, diff;
	currentWidth = 0;


	// # Input
	printf("Welcome to ZIGZAG world!\n");

	printf("How wide do you want your ZIGZAG line?"
		"Enter a number between 3 and 60: ");
	scanf("%d%*c", &width);


	// Why does this work?
	do
	{
		diff = width - currentWidth;
		for (; currentWidth < width; currentWidth++)
		{
			for (int j = 0; j < currentWidth; j++)
				printf(" ");
			printf("%c\n", rectangle);
		}
		
		width -= diff / 2;
		diff = width - currentWidth;
		currentWidth -= 2;
		for (; currentWidth >= width -1; --currentWidth)
		{
			for (int j = 0; j < currentWidth; j++)
				printf(" ");
			printf("%c\n", rectangle);
		}
		
		width -= diff / 2;
	} while (diff*diff > 9);


	// # Exit
	return 0;
}