#include <stdbool.h>

void print_array(int *, int, int);

// void sort(int * array, int size)
// {
//     int p;

//     for (int a = 0; a < size; a++)
//     {
//         for (int b = 0; b < (size - 1); b++)
//         {
//             if (array[b] < array[b + 1])
//             {
//                 p = array[b];
//                 array[b] = array[b + 1];
//                 array[b + 1] = p;
//             }
//         }
//         print_array(array, size, a);
//     }
// }

void sort(int * array, int size)
{
    int p;
    bool sorting_completed = false;
    int sorted_number = 0;
    int index = 0;
    int count = 0;

    while (!sorting_completed)
    {
        for(index = 0, sorted_number = 0; index < size - 1; index++)
        {
            if (array[index] < array[index + 1])
            {
                p = array[index];
                array[index] = array[index + 1];
                array[index + 1] = p;
            }
            if (array[size - 1 - index - 1] < array[size - 1 - index])
            {
                sorted_number--;
            }
            else
            {
                sorted_number++;
            }
            if (sorted_number == (size - 1))
            {
                sorting_completed = true;
            }
        }
        print_array(array, size, count);
        count++;
    }
}
