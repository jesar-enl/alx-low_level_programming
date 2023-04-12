#include "search_algos.h"
#include <math.h>

/**
 * jump_search - another algorithm used to search an element by
 * jumping a number of steps
 * @array: array to use
 * @size: number of elements in the array
 * @value: element to search for
 * Return: the index of the value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, i = 0, prev;

	if (!array || size == 0)
		return (-1);

	for (prev = sqrt(size); i < size; i += prev)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]", i - prev, i);
	for (step = i - prev; step < size && step <= i; step++)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
	}
	return (-1);
}
