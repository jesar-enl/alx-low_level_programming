#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int num1;
	int num2;

	/* Print 2-digit numbers less than 90 and separated by a comma */

	/* Print the first digit */
	for (num1 = '0'; num1 < '9'; num1++)
	{
		/* Print the second digit */
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			/* Prints the double digit number */
			if (num2 != num1)
			{
				putchar(num1);
				putchar(num2);

				if (num1 == '8' && num2 == '9')
				{
					continue;
				}
				/* Print the separator */
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
