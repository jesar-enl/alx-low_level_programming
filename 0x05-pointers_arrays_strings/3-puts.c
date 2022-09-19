#include "main.h"

/**
 * _puts - prints a string
 * @str: String to be output
 *
 * Description: A function that outputs a string to the screen
 * Return: void
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
