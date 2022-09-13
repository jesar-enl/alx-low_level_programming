#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int x;

	x = _isalpha('a');
	_putchar(x + '0');
	x = _isalpha('H');
	_putchar(x + '0');
	x = _isalpha(119);
	_putchar(x + '0');
	x = _isalpha(';');
	_putchar(x + '0');
	_putchar('\n');
	return (0);
}
