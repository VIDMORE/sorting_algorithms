#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: size of thearray
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, swapped = 0;

	if (!*array || !array || size < 2 || !size) /* Check */
		return;

	while (!swapped)
	{
		swapped = 1;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				swap(&array[j + 1], &array[j]);
				print_array((const int *)array, size);
				swapped = 0;
			}
		}
		i++;
	}
}

/**
 * swap - Swaps two integers
 * @n1: number 1
 * @n2: number 2
 * Return: void
 */
void swap(int *n1, int *n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
