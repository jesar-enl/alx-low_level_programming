#include "main.h"

/**
 * print_line - prints a straight line on the console
 * @n: the number of characters that form a line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
