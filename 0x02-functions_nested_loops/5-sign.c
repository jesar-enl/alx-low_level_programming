#include "main.h"

/**
 * print_sign - print the sign of an integer
 * @n: To be evaluated
 *
 * Description: print the sign of an integer
 * Return: 1 (greater than 0)
 * 0 (is zero) -1 (less than 0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
