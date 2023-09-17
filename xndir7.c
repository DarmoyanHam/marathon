#include <stdio.h>

int main()
{
	double x = 0.0f;
	scanf("%lf", &x);

	double res = x / (5 + 2) + 30 * x - 51;

	printf("%f", res);

	return 0;
}
