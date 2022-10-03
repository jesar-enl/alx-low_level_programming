#include "main.h"

/**
 * _strdup - duplicates a pointer
 * @str: string
 * Return: copy of the array
 */
char *_strdup(char *str)
{
	int i = 0, c = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
		c++;

	cp = malloc(sizeof(char) * c + 1);

	if (cp == NULL)
	{
		return (NULL);
	}

	while (i < c)
	{
		cp[i] = str[i];
		i++;
	}
	return (cp);
}
