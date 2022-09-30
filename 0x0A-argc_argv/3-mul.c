#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: count of args
 * @argv: pointer to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}

	return (0);
}
