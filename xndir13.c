#include <stdio.h>

int main()
{
	double celsius = 0;
	scanf("%lf", &celsius);

	double farenheit = (celsius * 9 / 5) + 32;
	printf("%lf \n", farenheit);

	return 0;
}
