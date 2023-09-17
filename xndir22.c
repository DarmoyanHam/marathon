#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%i %i", &a, &b);
	int c = (a > b) ? a : b;
	printf("%i \n", c);

	return 0;
}
