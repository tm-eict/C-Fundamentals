#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	int i = 0;
	char text[BUFSIZ], file[256];
	
	printf("Enter a file name: ");
	scanf("%s%*c", &file);
	printf("Enter file extention (eg: txt): ");
	scanf("%s%*c", &text);
	//combine strings for file
	strcat(file, ".");
	strcat(file, text);

	printf("Enter your text: ");
	gets(text);
	
	if ((fp = fopen(file, "w")) == NULL)
	{
		printf("Can't create file, did you use characters that arent allowed?");
		exit(-1);
	}
	printf("File created!\n");

	
	if (fputs(text, fp) == EOF)
	{
		printf("Was not succesful!");
		exit(-2);
	}
	printf("Text has been written!\n");

	fclose(fp);
	printf("File saved and closed.");

	return 0;
}