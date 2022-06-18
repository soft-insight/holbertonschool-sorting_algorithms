#include "sort.h"

/**
 * swap - 
 *
 *
 */

void swap(int *number_a, int *number_b)
{
	int temp = *number_a;

	*number_a = *number_b;
	*number_b = temp;
}

/**
 *
 *
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, low_value = 1;
	if (array == NULL || !*array)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = j, low_value = j; i < size; i++)
		{
			if (array[i] < array[low_value])
				low_value = i;
		}
		if (j != low_value)
		{
			swap(array + j, array + low_value);
			print_array(array, size);
		}
	}
}
