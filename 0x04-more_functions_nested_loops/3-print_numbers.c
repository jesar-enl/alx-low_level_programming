#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Description: the function is printing numbers from 0 to 9
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
