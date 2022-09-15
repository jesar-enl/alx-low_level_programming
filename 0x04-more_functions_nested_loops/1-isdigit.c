#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: character being evaluated
 * Description: The function checks whether the character is a digit
 * Return: 1 (success), 0 (fail)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
