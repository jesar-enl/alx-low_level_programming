#include "main.h"

/**
 * _strcmp - Determines if two strings are comparable to each other
 * @s1: String to be compared
 * @s2: String to be compared
 *
 * Return: 0 (equal) or non-zero value (> or < 0)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
