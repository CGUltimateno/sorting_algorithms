#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;
    sort_partition(array,0 , size - 1,  size);
}

/**
 * sort_partition - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @low: low index
 * @high: high index
 * @size: size of the array
 */

void sort_partition(int *array, int low, int high, int size)
{
    int pivot = 0;

    if (low < high)
    {
        pivot = get_pivot(array, low, high, size);
        if (pivot - low > 1)
            sort_partition(array, low, pivot - 1, size);

        if (high - pivot > 1)
            sort_partition(array, pivot + 1, high, size);
    }
}

/**
 * swap - swaps two elements in an array
 * @array: array to be sorted
 * @first_index: first index
 * @second_index: second index
 */

void swap(int **array, int first_index, int second_index)
{
    int temp = 0;

    temp = (*array)[first_index];
    (*array)[first_index] = (*array)[second_index];
    (*array)[second_index] = temp;
}

/**
 * get_pivot - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: pivot index
 */

int get_pivot(int *array, size_t size, int first, int last)
{
    int pivot = 0;
    int f = 0;
    int new = 0;

    pivot = last;
    f = first;
    new = first - 1;

    for (; f <= last; f++)
    {
        if (array[f] <= array[pivot])
        {
            new++;
            if (new != f)
            {
                swap(&array, new, f);
                print_array(array, size);
            }
        }
    }
    if(new + 1 != last)
    {
        swap(&array, new + 1, last);
        print_array(array, size);
    }
    return (new + 1);
}