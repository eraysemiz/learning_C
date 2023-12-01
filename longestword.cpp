#include <stdio.h>
#include <string.h>

int main(void)
{
	char cumle[100];
	printf("Cumle giriniz: ");
	gets(cumle);
	int sayac = 0;
	int max_len = 0;
	int baslangic;
	
	int length = strlen(cumle);
	
	for (int i = 0; i <= length; i++)
	{
		if (cumle[i] != ' ' && i < length)
		{
			sayac++;
		}
		if(cumle[i] == ' ' || i == length)
		{
			if (sayac > max_len)
			{
				max_len = sayac;
				baslangic = (i - sayac + 1);
			}
			sayac = 0;
		}
	}
	printf("Cumlenizdeki en uzun kelime: ");
	for (int j = baslangic - 1; j < baslangic + max_len; j++)
	{
		printf("%c", cumle[j]);
	}
	
	return 0;
}
