#include "main.h"

/**
 * rot13 - rotate letters 13 places
 * @s: character to be rotated
 * Description: The function rotates a character 13 places, after or before it.
 * Return: the character
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if ((s[i] >= 97 && s[i] <= 109) || (s[i] >= 65 && s[i] <= 77))
			{
				s[i] += 13;
			}
			else
			{
				s[i] -= 13;
			}
			i++;
		}
		i++;
	}
	return (s);
}
