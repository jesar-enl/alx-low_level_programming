#include "main.h"

/**
 * print_alphabet - Prints the alphabetto terminal
 *
 * Description: Prints int lowercase to terminal
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
