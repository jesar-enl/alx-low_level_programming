#include "search_algos.h"

/**
 * binary_search - use the binary form to search for an element
 * @array: the arry list to search from
 * @size: the number of elements in the array
 * @value: the element being search for
 * Return: the index of the element or -1 if unsuccessful
 */
int binary_search(int *array, size_t size, int value)
{
	int m, l, r;

	if (!array)
		return (-1);

	for (l = 0, r = (int)size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);

		if (array[m] < value)
		{
			l = m + 1;
		}
		else
			r = m - 1;
	}
	return (-1);
}
