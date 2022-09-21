#include "main.h"

/**
 * base10 - change the integer to base 10
 * @n: integer
 * Return: base
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
/**
 * print_number - prints an integer to the screen
 * @n: Integer to be printed to the screen
 *
 * Return: void
 */
void print_number(int n)
{
	int power;

	power = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		while (n / power == 0)
		{
			power /= 10;
		}
		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}
