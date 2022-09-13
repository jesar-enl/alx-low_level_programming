#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int g;

	g = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(g + '0');
	_putchar('\n');
	g = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(g + '0');
	_putchar('\n');
	g = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(g + '0');
	_putchar('\n');
	g = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(g + '0');
	_putchar('\n');
	return (0);
}
