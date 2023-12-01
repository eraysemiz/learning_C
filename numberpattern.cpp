#include <stdio.h>

int main(void)
{
	int bosluk = 2;
	int num1 = 7;
	int num2 = 3;
	
	for (int a = 0; a < 6; a++)
	{
		for (int i = num1; i > 0; i--)
		{
			printf("%d", i);
		}
		num1 = num1 - 1;
		
		for (int n = bosluk; n > 0; n--)
		{
			printf(" ");
		}
		bosluk = bosluk + 2;
		
		for (int j = num2; j < 10; j++)
		{
			printf("%d", j);
		}
		printf("\n");
		num2 = num2 + 1;
		
		
	}
	
}
