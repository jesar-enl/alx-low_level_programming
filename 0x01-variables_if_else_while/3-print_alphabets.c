#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char low;

	/* alphabet in lowercase */
	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	/* alphabet in UPPERCASE */
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
