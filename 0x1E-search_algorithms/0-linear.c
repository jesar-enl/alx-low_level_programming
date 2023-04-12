#include "search_algos.h"

/**
 * linear_search - search for an element in alist in a linear form
 * until the desired one is found
 * @array: the array list to search from
 * @size: the number of elements in the array
 * @value: the element being searched
 * Return: -1 if unsuccessful or index of the element being searched
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
