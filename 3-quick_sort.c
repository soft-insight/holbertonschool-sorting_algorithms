#include "sort.h"

/**
 *
 *
 *
 */

void swap(int *array, int min, int max, size_t size)
{
	int temp;

	if (array[min] != array[max])
	{
		temp = array[min];
		array[min] = array[max];
		array[max] = temp;

		print_array(array, size);
	}
}

int div_array(int *array, int min, int max, size_t size)
{
	int count;
	int storage = min;
	int storage2 = array[max];

	for (count = min; count <= max; count++)
	{
		if (array[count] < storage2)
		{
			swap(array, storage, count, size);
			storage++;
		}
	}
	swap(array, storage, max, size);
	return (storage);
}

void search(int *array, int min, int max, size_t size)
{
	int d;

	if (min < max)
	{
		d = div_array(array, min, max, size);
		search(array, min, d - 1, size);
		search(array, d + 1, max, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if (!*array || array == NULL || size < 2)
		return;

	search(array, 0, size - 1, size);
}
