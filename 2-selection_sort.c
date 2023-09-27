#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t min_size = 0;
size_t pass = 0, index = 0;
size_t pass_required = 0;
int temp = 0;

if (array == NULL || size < 2)
return;

pass_required = size - 1;
for (pass = 0; pass < pass_required; pass++)
{
min_size = pass;
for (index = pass + 1; index < size; index++)
{
if (array[index] < array[min_size])
min_size = index;
}
temp = array[pass];
array[pass] = array[min_size];
array[min_size] = temp;
if (min_size != pass)
{
print_array(array, size);
}
}
}