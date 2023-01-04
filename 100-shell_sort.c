#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using the Shell
 * sort algorithm, using the Knuth sequence.
 * @array: The array to sort.
 * @size: Number of elements.
 * Return: Nothing.
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 0;
	int tmp;

	while ((gap = gap * 3 + 1) && gap < size)
		;
	gap = (gap - 1) / 3;

	while (gap > 0)
	{
		for (j = gap; j < size; j++)
		{
			tmp = array[j];
			for (i = j; tmp <= array[i - gap] && i >= gap; i -= gap)
				array[i] = array[i - gap];
			array[i] = tmp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
