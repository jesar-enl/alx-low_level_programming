#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_num(char *str);
/**
 * main - add positive numbers
 * @argc: count of arguments
 * @argv: pointer to string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, i, res = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			num = atoi(argv[i]);
			if (num > 0)
			{
				res += num;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);

	return (0);
}

/**
 * is_num - deetermine integer
 * @str: string
 * Return: 0 , 1
 */
int is_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
