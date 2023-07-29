#include <stddef.h>
#include "sort.h"

/**
 * selection_sort - Performs selection sort on array of integers
 * @array: Pointer to array of integers
 * @size: Size of array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t min_idx, i, j;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			int temp = array[i];

			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
