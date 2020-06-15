#include "sort.h"

/**
 * insertion_sort_list - Sorts an array of integers in ascending order
 * using the Insertion sort algorithm
 * @list: The linked list to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next_iter = NULL;

	if (!*list || !list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		next_iter = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);

		}
		current = next_iter;
	}
}
