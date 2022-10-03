#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * initialized to a specific char
 * @size: size of the array
 * @c: specified char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
