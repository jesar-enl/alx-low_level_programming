#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: count of arguments
 * @argv: pointer to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
