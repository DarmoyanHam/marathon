#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%i", &age);
	if(age > 0 && age < 18)
	{
		printf("Duq anchapahas eq \n");
	}
	else if(age >= 18 && age <= 65)
	{
		printf("Duq chapahas eq \n");
	}
	else if(age > 65)
	{
		printf("Duq tarec qaxaqaci eq \n");
	}
	else
	{
		printf("Invalid number \n");
	}

	return 0;
}
