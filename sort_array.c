#include <stdio.h>

void sort(int array[], int size);

int main(void)
{
    int array[] = {9, 7, 1, 5, 8, 4, 2, 9, 6, 3, 14, -12, - 241};
    int size = sizeof(array) / sizeof(array[1]); // number of elements in array

    sort(array, size);

}

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int a = 0; a < size; a++)
    {
        printf("%d ", array[a]);
    }
    

}