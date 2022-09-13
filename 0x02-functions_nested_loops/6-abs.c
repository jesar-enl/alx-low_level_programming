#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: the number to be converted into it's absolute value
 *
 * Description: The function takes an integer
 * and computes it to absolute value
 * Return: abssolute value of 'n'
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
