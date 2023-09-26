#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;
    sort_partition(array, size, 0, size - 1);
}

/**
 * sort_partition - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @first: first index
 * @last: last index
 * Return: pivot index
 */

void sort_partition(int *array, int size, int first, int last)
{
    int pivot = 0;

    if (first < last)
    {
        pivot = get_pivot(array, size, first, last);
        if (pivot - first > 1)
            sort_partition(array, size, first, pivot - 1);

        if (last - pivot > 1)
            sort_partition(array, size, pivot + 1, last);
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
 * @size: size of the array
 * @first: first index
 * @last: last index
 * Return: pivot index
 */

int get_pivot(int *array, size_t size, int first, int last)
{
    int pivot = 0;
    int f = 0, new = 0;

    pivot = last;
    f = first;
    new = first - 1;

    for (; f < last; f++)
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
    if ((new + 1) != last)
    {
        swap(&array, new + 1, last);
        print_array(array, size);
    }
    return (new + 1);
}