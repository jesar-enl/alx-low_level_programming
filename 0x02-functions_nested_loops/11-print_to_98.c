#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * up to 98
 * @n: number that starts the counting
 * Description: Print all natural numbers up
 * to 98.
 * If the staring number is greater than 98, the
 * function counts down to 98.
 * Otherwise, the function counts up to 98.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
