#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	unsigned int size = s1_len + s2_len;
	char *string;

	string = (char *) malloc((sizeof(char) * size) + 1);
	if (string == 0)
		return (0);

	for (i = 0; i < s1_len; i++)
		string[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		string[i + s1_len] = s2[i];

	string[size] = '\0';
	return (string);
}

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
