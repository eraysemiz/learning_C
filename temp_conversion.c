#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char unit;
    float temp;

    printf("Is the temperature in 'F' or 'C'?: ");
    scanf("%c", &unit);
    unit = toupper(unit); // Converting input to uppercase 

    if (unit == 'C')
    {
        printf("\nEnter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; // Formula of converting Celsius to Fahrenheit
        printf("\nThe temperature in Fahrenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9; // Formula of converting Fahrenheit to Celsius
        printf("\nThe temperature in Celsius is: %.1f", temp);
    }   
    else
    {
        printf("\n%c is not a valid unit of measurement.", unit);
    }
    return 0;
    
}