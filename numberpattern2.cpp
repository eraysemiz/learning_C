#include <stdio.h>

int main(void)
{
	int num1 = 5;
	int bosluk = 1;
	for(int i = 0; i < 5; i++)
	{
		for (int j = bosluk; j > 0; j--)
		{
			printf(" ");
		}
		bosluk = bosluk + 1;
		
		for (int a = num1; a > 0; a--)
		{
			printf("%d", a);
		}
		
		for(int b = 1; b <= num1; b++)
		{
			printf("%d", b);
		}
		num1 = num1 - 1;
		printf("\n");
	}
	
}
