#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 20

int isPalindrome(char[]);

int main(void)
{
	// # Variables
	char str[20];

	while (1)
	{
		// #Input
		printf("Enter a word: ");
		scanf("%s%*c", str);


		// # Output
		printf("%s is%s a palindrome\n", str, isPalindrome(str) ? "" : " not");
	}

	// # Exit
	return 0;
}

int isPalindrome(char str[])
{
	int len, ret;

	ret = 1;
	len = strlen(str) - 1;

	for(int i = 0; i <= len / 2 && ret; ++i)
		if (str[i] != str[len - i])
			ret = 0;

	return ret;
}
