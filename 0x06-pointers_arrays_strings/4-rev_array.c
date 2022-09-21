#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of characters
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	for (; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
