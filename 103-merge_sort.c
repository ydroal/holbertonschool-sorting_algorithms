#include "sort.h"
#include <stdlib.h>

/**
 * duplicate_value - copy the value of array to merge
 *                   from array into temporary array
 *
 * @array: the array to sort
 * @start: start index of array
 * @mid: index of middle of array
 * @end: end index of array
 * @tmp: pointer to array using as working area
 * Return: Nothing
*/

void duplicate_value(int *array, size_t start,
		size_t mid, size_t end, int *tmp)
{
	size_t i, j;

	printf("Merging...\n");
	for (i = start; i <= mid; ++i)
	{
		tmp[i] = array[i];
		if (i == start)
			printf("[left]: %d", tmp[i]);
		else
			printf(", %d", tmp[i]);
	}

	for (i = mid + 1, j = end; i <= end; ++i, --j)
	{
		tmp[i] = array[j];
		if (i == mid + 1)
			printf("\n[right]: %d", tmp[i]);
		else
			printf(", %d", tmp[i]);
	}
}

/**
 * merge_sort_recursion - sorts an array of integers in ascending order
 *
 * @array: the array to sort
 * @start: start index of array
 * @end: end index of array
 * @tmp: pointer to array using as working area
 * Return: Nothing
*/

void merge_sort_recursion(int *array, size_t start, size_t end, int *tmp)
{
	size_t mid, k, l, m;

	if (start >= end)
		return;

	mid = (start + end) / 2;
	if ((start + end) % 2 == 0)
		mid = mid - 1;

	merge_sort_recursion(array, start, mid, tmp);
	merge_sort_recursion(array, mid + 1, end, tmp);

	duplicate_value(array, start, mid, end, tmp);

	l = start;
	m = end;
	printf("\n[Done]: ");
	for (k = start; k <= end; ++k)
	{
		if (tmp[l] <= tmp[m])
		{
			array[k] = tmp[l];
			++l;
		}
		else
		{
			array[k] = tmp[m];
			--m;
		}
		if (k == end)
			printf("%d", array[k]);
		else
			printf("%d, ", array[k]);
	}
	printf("\n");
}

/**
 * merge_sort - allocate the memory for working area
 *              and call recursive function
 *
 * @array: the array to sort
 * @size: size of array
 * Return: Nothing
*/
void merge_sort(int *array, size_t size)
{
	int *tmp;

	if (array == NULL || size < 2)
		return;

	tmp = malloc(sizeof(int) * size);
	if (tmp == NULL)
		return;

	merge_sort_recursion(array, 0, size - 1, tmp);
	free(tmp);
}
