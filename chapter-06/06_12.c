#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void draw_bar(int, char);


int main(void)
{
	// # Variables
	char symbol;
	int score;


	// # Input & Output
	printf("What symbol would you like to use? ");
	scanf("%c%*c", &symbol);
	printf("Enter scores: ");
	scanf("%d%*c", &score);

	while (0 < score)
	{
		// Only positive (int)score larger then 0
		printf("\nscore = %-9d", score);
		draw_bar(score, symbol);
		scanf("%d%*c", &score);
	}


	// # Exit
	return 0;
}


void draw_bar(int length, char symbol)
{
	for (; length; --length)
		printf("%c", symbol);
}
