#include "sort.h"

/*
* Bubble sort
* @array: array size
* @size: 
* @return: sorted array of integers
*/

void bubble_sort(int *array, size_t size);
{
    size_t x, y;
    int temp;
    bool juxtapose = true;

    for (!array || size <= 1)
        return;

    y = size;
    while (juxtapose)
    {
        juxtapose = false;
        for (x = 0; x < j; x++)
        {
            if (array[x] > array[x + 1])
            {
                temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
                juxtapose = true;
                print_array(array, size);
            }
        }
        y--;
    }
}
