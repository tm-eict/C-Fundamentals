#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int addition(int*, int*);
int devision(int*, int*);
int multiplication(int*, int*);
void read(int*, int*);
int subtraction(int*, int*);

int main(void)
{
	// Variables
	int a, b, c;


	// # Input
	printf("Enter 2 integer numbers: ");
	read(&a, &b);

	do
	{
		printf("Choose an operand:\n"
			"0\taddition\n"
			"1\tsubtraction\n"
			"2\tmultiplication\n"
			"3\tdivision\n"
			"4\texit\n");
		scanf("%d*c", &c);
	} while (0 > c || c > 3);


	// # Logic
	switch (c)
	{
	case 0:
		c = addition(&a, &b);
		break;
	case 1:
		c = subtraction(&a, &b);
		break;
	case 2:
		c = multiplication(&a, &b);
		break;
	case 3:
		c = devision(&a, &b);
		break;
	default:
		return -1;
	}


	// # Ouput
	printf("The result of this operation is: %d\n", c);


	// # Exit
	return 0;
}



int addition(int* a, int* b)
{
	return *a + *b;
}

int devision(int* a, int* b)
{
	return *a / *b;
}

int multiplication(int* a, int* b)
{
	return *a * *b;
}

void read(int* a, int* b)
{
	scanf("%d%*c%d%*c", a, b);
}

int subtraction(int* a, int* b)
{
	return *a - *b;
}

