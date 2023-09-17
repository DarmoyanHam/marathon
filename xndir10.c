#include <stdio.h>

int main()
{
	char sym;
	scanf("%c", &sym);
	if(sym >= '0' && sym <= '9')
	{
		printf("TRUE \n");
	}
	else
	{
		printf("FALSE \n");
	}

	return 0;
}
