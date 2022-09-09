#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	/* Print a 3-digit number */
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				/* When c is greate than b and b greater than a */
				if (c > b && b > a)
				{
					/* add a 0 to the number */
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					/* If the numbers are not equal to 7, 8, 9 */
					if (a != 7 || b != 8 || c != 9)
					{
						/* Separate witha comma */
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
