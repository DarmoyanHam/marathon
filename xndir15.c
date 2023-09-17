#include <stdio.h>

int main()
{
	unsigned int mark;
	scanf("%i", &mark);
	if(mark >= 90 && mark <= 100)
	{
		printf("A dasaran \n");
	}
	else if(mark >= 80 && mark <= 89)
	{
		printf("B dasaran \n");
	}
	else if(mark >= 70 && mark <= 79)
	{
		printf("C dasaran \n");
	}
	else if(mark >= 60 && mark <= 69)
	{
		printf("D dasaran \n");
	}
	else if(mark < 60)
	{
		printf("E dasaran \n");
	}

	return 0;
}
