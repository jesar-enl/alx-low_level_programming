#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: character to be evaluated
 * Description: The function is checking whether the character is in uppercase
 * Return: 1 (success) or 0 (fail)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
