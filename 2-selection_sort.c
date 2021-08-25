#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{

int x, y, min, temp, z = (int)size;

if (array == NULL || size < 2)
return;

for (x = 0; x < z - 1; x++)
{

min = x;

for (y = x + 1; y < z; y++)
{

if (array[y] < array[min])
min = y;
}

if (min != x)
{

temp = array[x];
array[x] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
