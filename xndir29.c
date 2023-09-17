#include <stdio.h>

void sameSym(char x, char y)
{
	if((x - y == 32) || (y - x == 32))
	{
		printf("true \n");
	}
	else
	{
		printf("false \n");
	}
}

int main()
{
	char sym;
	char sym2;
	scanf("%c %c", &sym, &sym2);
	if(((sym >= 'a' && sym <= 'z') || (sym >= 'A' && sym <= 'Z')) && ((sym2 >= 'a' && sym2 <= 'z') || (sym2 >= 'A' && sym2 <= 'Z')))
	{
		sameSym(sym, sym2);
	}
	else
	{
		printf("mutqagrvacneric 1-y tar che");
	}


	return 0;
}
