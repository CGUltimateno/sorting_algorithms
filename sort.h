#ifndef SORTING_ALGORITHMS_SORT_H
#define SORTING_ALGORITHMS_SORT_H
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(int **array, int first_index, int second_index);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int get_pivot(int *array, size_t size, int first, int last);
void sort_partition(int *array, int size, int first, int last);

#endif