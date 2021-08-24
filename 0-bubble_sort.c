#include "sort.h"

/*
* bubble_sort - sort an array of integers using bubble sort algorithm
* @array: array size
* @size: the size of the array
* @return: sorted array of integers
*/

void bubble_sort(int *array, size_t size)
{
    size_t x;
    int temp;
    bool juxtapose = true;

    if (!array || size <= 1)
        return;

    while (juxtapose)
    {
        juxtapose = false;
        for (x = 0; x < size; x++)
        {
            if (x < size - 1 && array[x] > array[x + 1])
            {
                temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
                juxtapose = true;
                print_array(array, size);
            }
        }
    }
}
