#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TOLOWER(c) ((c) >= 'A' && (c) <= 'Z' ? (c) + 32 : (c))


int main(void)
{
	char c;

	printf("Enter characters, end with 0: ");

	scanf("%c%*c", &c);
	while (c != '0')
	{
		printf("%c ", TOLOWER(c));
		scanf("%c%*c", &c);
	}
	puts("");


	// # Exit
	return 0;
}