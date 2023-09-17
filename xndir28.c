#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%i %i", &a, &b);
	if(a == 0 || b == 0)
	{
		printf("tveric 1-y 0 e \n");
	}
	else if((a % b == 0) || (b % a == 0))
	{
		printf("bajanvum en \n");
	}
	else
	{
		printf("chen bajanvum \n");
	}

	return 0;
}
