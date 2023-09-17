#include <stdio.h>

int main()
{
	int year;
	scanf("%i", &year);
	if(year % 4 == 0)
	{
		printf("%i tarin nahanj e \n", year);
	}
	else
	{
		printf("%i tarin nahanj che \n", year);
	}

	return 0;
}
