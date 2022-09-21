#include "main.h"

/**
 * cap_string - Capitalize every word in a string
 * separator - special characters
 * @c: character
 * @str: String argument
 *
 * Return: Capitalized @str
 */
int separator(char c)
{
	int i = 0;
	char sept[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (c == sept[i])
		{
			return (1);
		}
	}

	return (0);
}

char *cap_string(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;

		if (separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;

		i++;
	}

	return (str);
}
