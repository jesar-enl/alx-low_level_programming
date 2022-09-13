#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase
 * @c: character to be evaluated
 *
 * Description: Defines whether the character is
 * lowercase or uppercase
 * Return: 0 (if failed), 1 (if success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
