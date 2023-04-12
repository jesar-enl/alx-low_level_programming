#include "search_algos.h"

/**
 * bin_search - binary method to search for an element
 * @array: arry to use
 * @l: left index
 * @r: right index
 * @value: searched element
 * Return: the index of the value
 */
int bin_search(int *array, size_t l, size_t r, int value)
{
	size_t left = l, right = r - 1, mid = 0, i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			if (array[mid] < value)
				left = mid + 1;
			else if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}

/**
 * exponential_search - Another advanced binary search
 * @array: array to search
 * @size: number of elements
 * @value: elwmwnt being searched
 * Return: index of the value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1, min = 0;
	int res;

	if (array != NULL)
	{
		while (b < size && array[b] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", b, array[b]);
			b = b * 2;
		}
		if (b + 1 < size)
			min = b + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", b / 2, min - 1);
		res = bin_search(array, b / 2, min, value);
		if (res != -1)
			return (res);
	}
	return (-1);
}
