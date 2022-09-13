#include "main.h"

/**
 * main - check to see if the character is a
 * lowercase character
 *
 * Return: 0
 */

int main(void)
{
	int a;

	a = _islower('d');
	_putchar(a + '0');
	a = _islower('J');
	_putchar(a + '0');
	a = _islower(106);
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
