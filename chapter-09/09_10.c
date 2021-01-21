#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

	char array[] = "test";
	
	if (&array[0] == array)
		printf("&array[0] == array\n");
	if (array == &array)
		printf("array == &array\n");
	if (&array[0] == &array)
		printf("&array[0] == &array\n");

	// # Exit
	return 0;
}