#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: initial string scannned
 * @needle: string to be searched  in the first one
 *
 * Description: searches the given string in the specified main string
 * and returns the pointer to the first occurence of the given string
 * Return: pointer to first occurrence of the given string,NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
