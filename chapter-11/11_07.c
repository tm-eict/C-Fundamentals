#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXSTRING 20

void calcPrint(char[]);
void read(char[]);

int main(void)
{
	// # Variables
	char s[MAXSTRING];
	char* prev;
	int again = 1;


	while (again)
	{

		// # Input
		printf("Enter a word or a series of 2 or more letters: ");
		read(s);

		// # Output & logic
		calcPrint(s);

		printf("\nagain? (1=yes, 0=no): ");
		scanf("%d%*c", &again);
	}



	// # Exit
	return 0;
}

void calcPrint(char s[])
{
	char* smallest, * largest, * prev;

	smallest = largest = prev = s;

	printf("\n%c%c", *s++, *s);

	for (; *s; prev++, s++)
	{

		if (*s < *prev)
		{
			putchar(*prev);

			if (*s < *smallest)
				smallest = s;
		}
		else
		{
			putchar(*s);

			if (*s > * largest)
				largest = s;
		}
	}

	printf("\nlargest = %c and smallest = %c\n", *largest, *smallest);

}

void read(char s[])
{
	do
	{
		scanf("%s%*c", s);
	} while (strlen(s) < 2);
}
