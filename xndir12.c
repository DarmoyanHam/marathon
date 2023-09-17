#include <stdio.h>

int main()
{
	char str[20];
	scanf("%s", str);

	int pol = 1;
	int size = 0;
	while(str[size] != '\0')
	{
		++size;
	}
	for(int i = 0; i <= size / 2; ++i)
	{
		if(str[i] != str[size - i - 1])
		{
			pol = 0;
			break;
		}
	}
	if(pol)
	{
		printf("Toxy polindrom e \n");
	}
	else
	{
		printf("Toxy polindrom CHE \n");
	}

	return 0;
}
