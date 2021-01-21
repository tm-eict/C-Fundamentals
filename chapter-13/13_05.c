#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define IS_LETTER(c) ((c) >= 'A' && (c) <= 'Z' || (c) >= 'a' && (c) <= 'z')

int main(void)
{
	char c;

	scanf("%c%*c", &c);

	while (c != '\n')
	{
		printf("%d\n", IS_LETTER(c));
		scanf("%c%*c", &c);
	}



	// # Exit
	return 0;
}