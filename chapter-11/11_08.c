#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void read(int*, int*);
void print(int*, int*);

int main(void)
{
	// Variables
	int number, limit;

	// # Input
	read(&number, &limit);

	while (number | limit)
	{
		// # Logic, Ouput
		print(&number, &limit);
		// # Ouput
		read(&number, &limit);
	}


	// # Exit
	printf("Thanks!\n");
	return 0;
}

void read(int* a, int* b)
{
	printf("enter the number you want to use for the table of multiplication: ");
	scanf("%d%*c", a);
	printf("enter the limit: ");
	scanf("%d%*c", b);
}

void print(int* number, int* limit)
{
	int sum[2] = { 0, 0 };

	for (int tmp = *number; tmp < *limit; sum[tmp % 2] += tmp, tmp += *number)
		printf("%d\n", tmp);

	printf("\nthe sum of the even numbers is %d\n"
		"the sum of the odd numbers is %d\n\n", *sum, sum[1]);
}