#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int num, max, min;
	unsigned char count_max, count_min;
	
	// # Input & Logic
	printf("Enter 10 (int)numbers: ");
	scanf("%d%*c", &num);
	min = max = num;
	count_max = count_max = 1;

	for (int i = 1; i < 10; i++)
	{
		scanf("%d%*c", &num);

		if (num == min)
			count_min++;
		else if (num < min)
		{
			min = num;
			count_min = 1;
		}
		else if (num == max)
			count_max++;
		else if (num > max)
		{
			max = num;
			count_max = 1;
		}
	}


	// # Output
	printf("Max: %d enterd %hhu times, Min %d enterd %hhu times\n", min, count_min, max, count_max);

	// Exit
	return 0;
}