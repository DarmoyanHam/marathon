#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	scanf("%i %i %i %i", &a, &b, &c, &d);
	if((a + b + c + d) == 0)
	{
		int min = (a < b) ? a : b;
		min = (min < c) ? min : c;
		min = (min < d) ? min : d;
		printf("%i \n", min);
	}
	else
	{
		printf("Gumary 0 che");
	}

	return 0;
}
