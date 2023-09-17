#include <stdio.h>

int main()
{
	int age;
	scanf("%i", &age);
	if(age > 0)
	{
		printf("You are %i years old \n", age);
	}
	else
	{
		printf("The number is not positive \n");
	}
	return 0;
}
