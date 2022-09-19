#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string
 *
 * Description: the function returns the length of a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;
	int x;

	len = 0;
	x = 0;
	while (s[x] != '\0')
	{
		++len;
		x++;
	}

	return (len);
}
