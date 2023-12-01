#include <stdio.h>

int main(void)
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator(+, -, /, *): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("%c is not a valid operator.", operator);
        break;
    }
    printf("\nResult: %.2lf", result);
}