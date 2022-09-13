#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all multiples
 * of 3 and 5  less than 1024
 * Return: 0
 */
int main(void)
{
	int n;
	int total;

	n = 0;
	total = 0;
	
	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			total += n;
		}

		else if (n % 5 == 0)
		{
			total += n;
		}

		n++;
	}

	printf("%d\n", total);

	return (0);
}
