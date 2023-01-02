#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (i != min)
			print_array(array, size);
	}
}
