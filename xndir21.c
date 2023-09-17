#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		switch(ch)
		{
			case 'a':
			case 'A':
			case 'E':
			case 'e':
			case 'i':
			case 'I':
			case 'O':
			case 'o':
			case 'u':
			case 'U':
			case 'y':
			case 'Y':
				printf("dzaynavor \n");
				break;
			default:
				printf("baxadzayn \n");
		}
	}
	else
	{
		printf("mutqagrvacy tar che \n");
	}

	return 0;
}
