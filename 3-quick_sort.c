#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: The array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (!array)
		return;

	quick_s(array, low, high, size);
}

/**
 * quick_s - Sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: The array to be sorted
 * @low: low index of the sort range
 * @high: high index of the sort range
 * @size: size of the array
 * Return: void
 */
void quick_s(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_s(array, low, pivot - 1, size);
		quick_s(array, pivot + 1, high, size);
	}
}

/**
 * lomuto_partition - Always takes the last element as pivot and compare it
 * with each element of the array
 * @array: The array to be sorted
 * @low: low index of the sort range
 * @high: high index of the sort range
 * @size: size of the array
 * Return: void
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j = low;

	for (; j < high; j++)
	{
		if (array[j] <= pivot)
		{	
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array((const int *)array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array((const int *)array, size);
	}
	return (i);
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
