#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int d;

	/* Use the for loop to create the range of numbers */
	for (d = '0'; d <= '9'; d++)
	{
		/* Print the numbers */
		putchar(d);
		/* Separate the numbers using , */
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
