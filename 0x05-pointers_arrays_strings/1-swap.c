#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Description: The function swaps two integer values
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
