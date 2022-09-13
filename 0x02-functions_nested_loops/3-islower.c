#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: Character code to evaluate
 *
 * Description: The function checks whether the
 * character specified is lowercase
 * Return: 1 (if success) or 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
