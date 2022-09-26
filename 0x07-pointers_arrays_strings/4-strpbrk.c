#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string scanned
 * @accept: string containing characters to match
 *
 * Description: use to find the first characters of first string
 * that matches any character sprecified in string 2
 * excluding the null terminator
 * Return: pointer to character in s that matches or rern NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
