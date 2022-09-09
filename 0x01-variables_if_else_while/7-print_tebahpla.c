#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char high;

	for (high = 'z'; high >= 'a'; high--)
	{
		putchar(high);
	}
	putchar('\n');

	return (0);
}
