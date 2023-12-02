#include <stdio.h>

void birthday(char name[25], int age);

int main(void)
{
    char name[25];
    int age;

    printf("What's your name?: ");
    scanf("%s", name);
    printf("How old are you?: ");
    scanf("%d", &age);
    birthday(name, age);
}

void birthday(char name[], int age)
{
    printf("Happy birthday dear %s!\n", name);
    printf("You are %d years old!", age);
}