#include "sort.h"

/**
 * bubble_sort - Algorithm that sorts an array using the bubble sort logic
 * @array: Array of integers
 * @size: Size of array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, aux = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j =  0; j < size - 1 - i; j++)
		{
		aux++;
		if (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
		}
		}
	}
	printf("aux = %ld\n", aux);
}