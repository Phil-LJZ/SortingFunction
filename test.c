#include <stdio.h>
#include "sort.h"

void sort(int *, int);
void print_array(int *, int, int);

int main(void)
{
    int array[5] = {1, 1, 1, 2, 2};

    sort(array, 5);
    printf("done!");
    // printf("{");
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%d, ", array[i]);
    // }
    // printf("%d}", array[9]);
    return 0;
}

void print_array(int * array, int size, int index)
{
    printf("(%.2d)  {", index);
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d}\n", array[size - 1]);
}
