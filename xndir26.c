#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	scanf("%i %i %i", &a, &b, &c);
	int min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	int baj = 0;
	for(int i = 1; i <= min; ++i)
	{
		if((a % i == 0) && (b % i == 0) && (c % i == 0))
		{
			baj = i;
		}
	}
	printf("%i \n", baj);

	return 0;
}
