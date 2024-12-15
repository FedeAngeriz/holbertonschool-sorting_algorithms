#include "sort.h"

/**
 * quick_sort - Recreating the quick sort algorithm
 * @array: Where numbers are stored
 * @size: size of the array
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; array[j] >= 0; j--)
		{
			if (array[i] > array[j])
			temp = array[i];
			array[j] = temp;
		}
	}
}
