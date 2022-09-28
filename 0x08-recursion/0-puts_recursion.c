#include "main.h"

/**
 * _puts_recursion - writes the string to the output stream
 * @s: string being printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* stop at end of string */
		_putchar('\n'); /* print the new line */
	else
	{
		_putchar(*s); /* Print the characters of the string */
		s++;
		_puts_recursion(s); /* Print the next character in line */
	}
}
