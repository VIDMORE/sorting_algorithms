#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: The array to be sorted
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, key_pos;

	if (!array || !*array || !size || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		key_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[key_pos])
				key_pos = j;
		}
		swap(&array[key_pos], &array[i]);
		print_array((const int *)array, size);
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
