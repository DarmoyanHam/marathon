#include <stdio.h>

int main()
{
	int x;
	int y;
	scanf("%i %i", &x, &y);
	if(y != 0)
	{
		double res = x * y + 21 * x / y - 200;
		printf("%lf \n", res);
	}
	else
	{
		printf("The second number cannot be 0 \n");
	}

	return 0;
}
