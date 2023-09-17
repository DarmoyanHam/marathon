#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	scanf("%i %i %i", &a, &b, &c);
	if(a == b || a == c || b == c)
	{
		int max = a;
		if(b >= max)
		{
			max = b;
		}
		if(c >= max)
		{
			max = c;
		}
		printf("%i \n", max);
	}
	else
	{
		printf("havasar tver chkan \n");
	}

	return 0;
}
