#include <stdio.h>

// 2d arrays = her elemanın birer array olduğu arraylere denir

int main(void)
{

    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", numbers[i][j]);
        }
    }
    return 0;
}
/* 2d array oluştururken array içindeki arraylerin boyutunu belirtmek
    zorunlu
*/