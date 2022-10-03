#include "main.h"

/**
 * alloc_grid - pointer to a 2D array of ints
 * @width: rows
 * @height: columns
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
