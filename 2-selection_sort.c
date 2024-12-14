#include "sort.h"

/**
 * swap - Algorithm that uses swap two consecutive nodes in the list
 * @node1: puntero
 * @node2: puntero
 * Return: void
 */

void swap(int *node1, int *node2)
{
	int temporal = *node1;
	*node1 = *node2;
	*node2 = temporal;
}

/**
 * selection_sort - Algorithm that works by selecting the smallest element
 * @array: pointer that points to the first memory location of the array
 * @size: total number of elements in the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t recorre, i,  minIndex;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;

		for (recorre = i + 1; recorre < size; recorre++)
		{
			if (array[recorre] < array[minIndex])
				minIndex = recorre;
		}

		if (minIndex != i)
		{
			swap(&array[i], &array[minIndex]);
			print_array(array, size);
		}
	}
}
