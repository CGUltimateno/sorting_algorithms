#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
int i = 0, j = 0;
int temp = 0;
int pass_required = 0, last_index = 0;

if (array == NULL || size < 2)
return;

pass_required = size - 1;
for (i = 0; i < pass_required; i++)
{
last_index = size - i - 1;
for (j = 0; j < last_index; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
