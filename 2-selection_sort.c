#include "sort.h"

/**
 *
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
	size_t i, j, i_min;

	for (j = 0; j < size - 2; j++)
	{
		i_min = j;
		for (i = j; i < size - 1; i++)
		{
			if (array[i + 1] < array[i_min])
				i_min = i + 1;
		}
		swap(array + j, array + i_min);
		print_array(array, size);
	}
}
