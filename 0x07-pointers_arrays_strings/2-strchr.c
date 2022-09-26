#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to be scanned
 * @c: character to be searched
 *
 * Description: searches for the first occurence of a character c
 * (unsigned char) in the string pointed to by
 * the argument string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
