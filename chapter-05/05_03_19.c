#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	unsigned int num, start, end, sum, solution;
	start = end = sum = 1;
    solution = 0;


	// # Input
	printf("Enter an integer > 0: ");
	scanf("%u%*c", &num);


	// # Logic & Output
    printf("%u is the sum of:\n", num);
    while (start <= num / 2)
    {
        if (sum < num)
		{
            end++;
            sum += end;
        }
        else if (sum > num)
		{
            // No need to start all over just substract the first 
            // element (start) and increase starting point by one
            sum -= start;
            start++;
        }
        else if (sum == num)
		{
            for (int i = start; i < end; ++i)
                printf("%u + ", i);
            printf("%u\n", end);
            
            solution = start;

            sum -= start;
            start++;
        }
    }
    if (!solution)
        printf("no solution");


	// # Exit
	return 0;
}