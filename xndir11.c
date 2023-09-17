#include <stdio.h>

int main()
{
	char str[20];
	scanf("%s", str);
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; str[i] != '\0'; ++i)
	{
		if(str[i] == 'a'|| str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I'  || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' || str[i] == 'y'  			|| str[i] == 'Y')
		{
			++count1;
		}
		else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			++count2;
		}
	}
	printf("Dzaynavorneri qanaq: %i \nBaghadzaynneri qanaq: %i \n", count1, count2);

	return 0;
}
