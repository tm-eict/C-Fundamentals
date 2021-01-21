#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	// # Variables
	double a, b, c, discriminant, root1, root2, divider;


	// # Input
	printf("ax^2 + bx + c = 0\n"
		"Enter a b c: ");
	scanf("%lf%lf%lf%*c", &a, &b, &c);


	// # Logic
	discriminant = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("identity\n");
			else
				printf("no solutions (inconsistent equation)\n");
		}
		else
			printf("one solution: %lf\n", -b);
	}
	else if (discriminant == 0)
	{

		root1 = root2 = -b / (2 * a);

		printf("double real roots: %lf\n", root1);
	}
	else if (discriminant > 0)
	{
		root1 = (-b - sqrt(discriminant)) / (2 * a);
		root2 = (-b + sqrt(discriminant)) / (2 * a);
		printf("two real roots: %lf and %lf\n", root1, root2);
	}
	else
		printf("no real roots\n");


	// # Exit
	return 0;
}