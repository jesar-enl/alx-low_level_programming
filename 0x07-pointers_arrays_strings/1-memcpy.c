#include "main.h"

/**
 * _memcpy - copies n characters from the memory
 * area source to memory area destination
 * @dest: pointer to destination array
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 *
 * Description: function that copies memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
