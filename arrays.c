#include <stdio.h>

int main(void)
{
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

    for (int i = 0; i < sizeof(prices) / sizeof(double); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
}

/* sizeof() fonksiyonu girilen array in byte olarak boyutunu verir
bu array in kaç tane elemanı olduğunu bulmak için sizeof sonucunu 
sizeof(arrayveritipi)'ne böldük. */