#include <stdio.h>

int main()
{
	int a;
	do{
		scanf("%i", &a);
	} while(a <= 12);
	
	while(a != 0)
	{
		printf("%i", a % 10);
		a /= 10;
	}
	printf("\n");

	return 0;
}
