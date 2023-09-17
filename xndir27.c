#include <stdio.h>

int main()
{
	int num;
	scanf("%i", &num);
	int pos = 32;
	if((num & pos) == 0)
	{
		num ^= pos;
	}
	printf("%i \n", num);

	return 0;
}
