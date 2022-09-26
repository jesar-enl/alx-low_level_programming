#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing the list of characters to match
 * Description: calculates the length of the initial segment of string1
 * which consists entirely of characters in string2
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int result = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (result);
		}
	}

	return (result);
}
