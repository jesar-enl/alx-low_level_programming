#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: pointer to string
 * Return: 0
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
