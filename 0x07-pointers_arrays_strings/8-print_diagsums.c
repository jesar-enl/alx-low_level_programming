#include "main.h"

/**
 * print_diagsums - print the sum of diagonals of a matrix
 * @a: the array of the integers
 * @size: the size of the array
 *
 * Description: the function prints the sum of two diagonals
 * of a square matrix of integers
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(i * size) + 1];
		d2 += a[(size - 1) + ((size - 1) * i)];
	}

	printf("%d, %d\n", d1, d2);
}
