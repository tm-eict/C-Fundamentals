#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Constants & Variables
	const float PI = 3.141592653589793;
	
	float radius, surface;


	// Input
	printf("Radius: ");
	scanf("%f%*c", &radius);

	
	// Logic
	surface = 4 * PI * (radius * radius);


	// Output
	printf("The surface of a circle with radius %f is %f", radius, surface);


	// Exit
	return 0;
}