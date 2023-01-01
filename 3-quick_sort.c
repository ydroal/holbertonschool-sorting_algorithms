#include "sort.h"

/**
 * swap - swap two numbers
 *
 * @a: integer to swap
 * @b: integer to swap
 * Return: Nothing
*/
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - do partition
 *
 * @array: The array to sort
 * @start: start index
 * @end: end index
 * @size: size of array
 * Return: index of partition
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = start - 1;
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[end]);
	if (array[i + 1] != array[j])
		print_array(array, size);

	return (i + 1);
}

/**
 * sort_recursion - sorts an array in ascending order
 *
 * @array: The array to sort
 * @start: start index
 * @end: end index
 * @size: size of array
 * Return: Nothing
 */
void sort_recursion(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		sort_recursion(array, start, pivot - 1, size);
		sort_recursion(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *               using the quick sort algorithm
 *
 * @array: The array to sort
 * @size: Number of elements
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = (int)size - 1;

	if (array == NULL || size < 2)
		return;
	sort_recursion(array, start, end, size);
}
