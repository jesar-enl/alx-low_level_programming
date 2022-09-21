#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination file
 * @src: source file
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;

	if (n != 0)
	{
		while (*dest != 0)
		{
			dest++;
		}
		do {
			*dest = *src++;

			if (0 == (*dest))
				break;
			dest++;
		}
		while (--n != 0);
			*dest = 0;
	}
	return (dest);
}
