#include "main.h"

/**
 * _strncat - concatenate two strings of a specified number
 * @n: number of characters
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclength = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclength++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > srclength)
	{
		n = srclength;
	}

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
