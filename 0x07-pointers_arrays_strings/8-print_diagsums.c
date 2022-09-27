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
	/*Variable Declaration*/
	int i, j, k;
	long sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	/*Loops through elements on the diagonal*/
	for (i = 0, j = 0, k = (size - 1);
			(i < 20) && (j < size) && (k > -1);
			i++, j++, k--)
	{
		sum1 += *(a + size * i + j);
		sum2 += *(a + size * i + k);
	}
	printf("%ld, %ld\n", sum1, sum2); /*Outputs sum*/
}
