#include <stdio.h>

int main()
{
	int hasak = 0;
	scanf("%i", &hasak);

	if(hasak >= 0 && hasak < 150)
	{
		printf("Neroxutyun, duq cheq hamapatasxanum \n");
	}
	else if(hasak >= 150)
	{
		printf("Duq hamapatasxanum eq \n");
	}

	return 0;
}
