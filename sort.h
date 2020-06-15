#ifndef SORT_ALGORITHMS
#define SORT_ALGORITHMS

/* Required libraries */

#include <stdio.h>
#include <stdlib.h>

/* END */

/* Double linked list structure */

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

/* END */

/* Print Functions */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* END */

/* Sort functions */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *n1, int *n2);
void quick_s(int *array, int low, int high, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);

/* END */

#endif /* SORT_ALGORITHMS */
