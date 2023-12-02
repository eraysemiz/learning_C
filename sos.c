#include <stdio.h>

int main(void)
{
    char grid[4][11];

    int rows = sizeof(grid) / sizeof(grid[0]);
    int columns = sizeof(grid[0]) / sizeof(grid[0][1]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (j % 2 != 0)
            {
                grid[i][j] = ' ';
            }
            else
            {
                grid[i][j] = '|';
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

}