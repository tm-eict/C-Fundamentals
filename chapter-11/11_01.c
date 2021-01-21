#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void ReadValues(double*, double*, double*);

int main(void)
{
	// # Variables
	double a, b, c;

	// # Input
	printf("Enter 3 doubles: ");
	ReadValues(&a, &b, &c);

	// # Output
	printf("a: %lf, b: %lf, c: %lf\n", a, b, c);

}

void ReadValues(double *a, double *b, double *c)
{
	scanf("%lf%*c", a);
	scanf("%lf%*c", b);
	scanf("%lf%*c", c);
}
