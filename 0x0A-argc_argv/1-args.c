#include <stdio.h>

/**
 * main - print the number arguments received
 * @argc: number of arguments
 * @argv: pointer to strings
 * Return: 0
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
