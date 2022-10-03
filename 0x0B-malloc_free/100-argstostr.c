#include "main.h"

/**
 * argstostr - an array of arguments
 * @ac: argument count
 * @av: argument vector
 * Return: char value
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	count = 0;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}

	count += (ac + 1);
	str = (char *) malloc(sizeof(char) * count);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
