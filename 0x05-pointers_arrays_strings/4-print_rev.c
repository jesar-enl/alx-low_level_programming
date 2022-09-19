#include "main.h"

/**
 * print_rev - print a string in reverse mode
 * @s: string
 *
 * Description: the function prints the string in reverse order
 * Return: void
 */
int print_len(char *s);

void print_rev(char *s)
{
	int length;
	int i;

	length = print_len(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * print_len - prints the lengtht of the string
 * @s: string
 *
 * Return: void
 */
int print_len(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
