#include "main.h"

/**
 * times_table - display the multiplications table
 * Description: prints a 9 times table starting 
 * from 1
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i * j;

			if ((k / 10) == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(k + '0');

				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
