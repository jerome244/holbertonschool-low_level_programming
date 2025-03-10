#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for creating 2D array of int
 * initialised to 0
 *  @width: row
 *  @height: column
 *  Return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;
	
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(void *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
