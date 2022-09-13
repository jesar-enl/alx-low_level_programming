#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Description: print out the alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	while (i <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}
