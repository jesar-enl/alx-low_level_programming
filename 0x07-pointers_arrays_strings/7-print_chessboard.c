#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: array of characters
 *
 * Description: a function to dispaly the chessboard
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring Variables*/
	int i, j;

	i = 0;
	while (i < 8) /*Repetition*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n'); /*Print Newline*/
		i++; /*i + 1*/
	}
}
