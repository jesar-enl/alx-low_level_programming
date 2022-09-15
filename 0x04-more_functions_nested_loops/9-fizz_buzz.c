#include <stdio.h>

/**
 * main - prints all numbers from 1 - 100,
 * all multiples of 3 (Fizz)
 * all multiples of 5 (Buzz)
 * all multiples for both (FizzBuzz)
 * Return: void
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}
	printf("\n");

	return (0);
}
