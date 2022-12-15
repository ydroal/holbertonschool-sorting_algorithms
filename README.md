# C - Sorting algorithms & Big O

A Sorting Algorithm is used to rearrange a given array or list  
We are learning at least four different sorting algorithms in C.  
This is a group project.


## Requirements
* All files were compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* This code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


## Data Structure and Functions
For this project we are given the following print_array, and print_list functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Tasks
--0. Bubble sort--
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

	* Prototype: void bubble_sort(int \*array, size_t size);
	* You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

	* in the best case
	* in the average case
	* in the worst case

File: 0-bubble_sort.c, 0-O

--1. Insertion sort--
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

	* Prototype: void insertion_sort_list(listint_t \*\*list);
	* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	* You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

	* in the best case
	* in the average case
	* in the worst case

File: 1-insertion_sort_list.c, 1-O

--2. Selection sort--
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

	* Prototype: void selection_sort(int \*array, size_t size);
	* You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

	* in the best case
	* in the average case
	* in the worst case

File: 2-selection_sort.c, 2-O

--3. Quick sort--
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

	* Prototype: void quick_sort(int \*array, size_t size);
	* You must implement the Lomuto partition scheme.
	* The pivot should always be the last element of the partition being sorted.
	* You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

	* in the best case
	* in the average case
	* in the worst case

File: 3-quick_sort.c, 3-O

## Repo
* GitHub repository: holbertonschool-sorting_algorithms

