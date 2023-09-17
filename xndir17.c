#include <stdio.h>

void bool(int x)
{
	if(!x)
	{
		printf("false ");
	}
	else
	{
		printf("true ");
	}
}

int main()
{
	int A = 0;
	int B = 0;
	for(int i = 0; i < 4; ++i)
	{
		int C = A && B || !B ^ A;
		bool(A);
		bool(B);
		printf(" ");
		bool(C);
		printf("\n");
		if(i == 1)
		{
			A = !A;
		}
		B = !B;
	}

	return 0;
}
