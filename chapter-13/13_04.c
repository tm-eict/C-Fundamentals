#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define IS_LETTER(c) ((c) >= 'A' && (c) <= 'Z' || (c) >= 'a' && (c) <= 'z')
#define IS_CAPITAL(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_SMALL(c) (IS_LETTER(c) && !IS_CAPITAL(c))

int main(void)
{
	char c;

	printf("Enter characters, end with a none letter: ");


	scanf("%c", &c);
	while (IS_LETTER(c))
	{
		printf("Is %c a capital letter? %d\n", c, IS_CAPITAL(c));
		printf("Is %c a capital letter? %d\n\n", c, IS_SMALL(c));
		scanf("%c", &c);
	}
	fflush(stdin);


	// # Exit
	return 0;
}