#include <stdio.h>

int main(void)
{
	int bosluk = 1;
	int num1 = 7;
	int num2 = 1;
	
	for (int a = 0; a < 4; a++)
	{
		for (int j = 0; j < bosluk; j++)
		{
			printf(" ");
		}
		for (int i = num2; i <= num1; i++)
		{
			printf("%d", i);
		}	
		
		num2 = num2 + 1;
		num1 = num1 - 1;
		bosluk = bosluk + 1;
		printf("\n");
	}
	num1 = 7;
	num2 = 1;
	bosluk = 1;
	for (int a = 0; a < 4; a++)
	{
		for (int j = 0; j < bosluk; j++)
		{
			printf(" ");
		}
		for (int i = num1; i >= num2; i--)
		{
			printf("%d", i);
		}	
		
		num2 = num2 + 1;
		num1 = num1 - 1;
		bosluk = bosluk + 1;
		printf("\n");
	}
	
}
