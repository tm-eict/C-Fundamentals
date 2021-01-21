#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	// # Variables
	float consumption, cost, price, tax, total;
	tax = 0.21;


	// # Input
	printf("Enter gas consnumption (m^3): ");
	scanf("%f%*c", &consumption);


	// # Logic
	if (consumption > 1)
		cost = consumption * 20;
	else
	{
		consumption--;
		cost = 20;

		cost += consumption * (20 + 3.5);
	}
	tax *= cost;
	total = cost + tax;


	// # Ouput
	printf("Consumption: %g, cost price: %g, tax amount %g, total %g\n", consumption, cost, tax, total);


	// # Exit
	return 0;
}