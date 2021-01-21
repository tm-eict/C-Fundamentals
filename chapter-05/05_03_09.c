#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variabels
	int sum, num, count;
	sum = count = 0;


	// # Logic
	printf("Enter an integer number (999 to quit): ");
	scanf("%d%*c", &num);
	while (num != 999)
	{
		sum += num;
		count++;

		printf("Enter an integer number (999 to quit): ");
		scanf("%d%*c", &num);
	}
	

	// # Ouput
	printf("Sum: %d, Mean %f\n", sum, (float)sum / count);

	// # Exit
	return 0;
}