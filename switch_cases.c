#include <stdio.h>
#include <math.h>

int main(void)
{
    char grade;

    printf("Enter a grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did okay!");
        break;
    case 'D':
        printf("At least it is not an F!");
        break;
    case 'F':
        printf("You failed!");
        break;
    default: // else
        printf("Please enter only valid grades.");
        break;
    }
    return 0;
    
}