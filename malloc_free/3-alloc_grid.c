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

	arr = (int**)malloc(width * sizeof(int*));
	for (i = 0; i < width; i++)
	{
		arr[i] = (int*)malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
