#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of characters
 * @width:w
 * @height:l
 * Return: NULL,pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr[i])
		{
		for (j = 0; j < width; j++)
		{
			free(arr[j]);
		}
		free(arr);
		return (NULL);
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
