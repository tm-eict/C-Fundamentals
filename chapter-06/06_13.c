#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void goodbye(void);
void hello(void);
void sum(int num1, int num2);

int main(void)
{
	// # Variables
	int num1, num2;


	// # Setup
	hello();


	// # Input, Logic & Output
	for (int i = 0; i < 5; ++i)
	{
		printf("enter 2 (int)numbers < 100: ");
		scanf("%d%d%*c", &num1, &num2);

		sum(num1, num2);
	}


	// # Exit
	goodbye();
	return 0;
}


void goodbye(void)
{
	printf("Thanks for your cooperation.\n");
}

void hello(void) {
	printf("Welcome, this program will ask you to solve 5 sums.\n\n");
}

void sum(int num1, int num2)
{
	int x;

	printf("what is the sum of %d and %d? ", num1, num2);
	scanf("%d%*c", &x);

	printf("according to you, thesum of %d and %d equals %d. That is%s correct\n\n",
		num1, num2, x, (num1 + num2 == x) ? "" : " not");
}

