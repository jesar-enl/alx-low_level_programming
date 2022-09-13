#include "main.h"

void _print_value(int);
/**
 * print_times_table - printing a multiplication
 * table
 * @n: starting point to get the multiplication
 * table
 *
 * Description: This is a function that prints a
 * multiplication table, starting from 0
 * Return: Nothing (n is greater than 15 or less
 * than 0)
 */
void print_times_table(int n)
{
	if (n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int temp = i * j;

				if (temp / 100)
				{
					_print_value(temp);
				}
				else if (temp / 10)
				{
					if (j > 0)
					{
						_putchar(' ');
					}
					_print_value(temp);
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_print_value(temp);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * _print_value - formatted character output
 * @n: number to format
 * Description: the format of the numbers
 * Return: void
 */
void _print_value(int n)
{
	if (n / 100)
	{
		int a, b, c;

		a = n / 100;
		b = (n % 100) / 10;
		c = n % 10;
		_putchar('0' + a);
		_putchar('0' + b);
		_putchar('0' + c);
	}
	else if (n / 10)
	{
		int a, b;

		a = n / 10;
		b = n % 10;
		_putchar('0' + a);
		_putchar('0' + b);
	}
	else
	{
		_putchar('0' + n);
	}
}
