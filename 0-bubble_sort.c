#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 *
 * @array: The array to sort
 * @size: Number of elements
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int exchange = 1;

	while (exchange > 0)
	{
		exchange = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				exchange++;
				print_array(array, size);
			}
		}
	}

}
