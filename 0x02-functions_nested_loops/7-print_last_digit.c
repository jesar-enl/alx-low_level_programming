#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: the integer being evaluated
 *
 * Description: The number taken as an argument
 * and returns the last digit of the number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
	}
	else
	{
		m = n % 10;
	}

	_putchar((m % 10) + '0');
	return (m % 10);
}
