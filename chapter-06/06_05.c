#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	// # Variables
	int guess, attempts, secret;

	// # Setup
	srand(time(NULL));

	secret = rand() % 100 + 1;
	guess = 0;
	attempts = 1;


	// # Logic & Input & Output
	printf("The number is between 1 and 100\n");

	// Game loop
	printf("Guess: ");
	scanf("%d%*c", &guess);
	while (guess != secret)
	{
		printf("To %s.\n", guess > secret ? "high" : "low");

		printf("Guess: ");
		scanf("%d%*c", &guess);
		attempts++;
	}
	printf("Correct, it took you %d tries.\n", attempts);


	// # Exit
	return 0;
}