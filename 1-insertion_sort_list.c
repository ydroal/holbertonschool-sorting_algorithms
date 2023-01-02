#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (a = (*list)->next; a != NULL; a = tmp)
	{
		tmp = a->next;
		b = a->prev;
		while (b != NULL && a->n < b->n)
		{
			b->next = a->next;
			if (a->next != NULL)
				a->next->prev = b;
			a->prev = b->prev;
			a->next = b;
			if (b->prev != NULL)
				b->prev->next = a;
			else
				*list = a;
			b->prev = a;
			b = a->prev;
			print_list((const listint_t *)*list);
		}
	}
}
