#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - allocate memory for creating an array of int
 * @min: minimum value
 * @max: maximum value
 * Return:  return pointer of the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (arr = 0; min <= max; min++, arr++)
	{
		ptr[arr] = min;
	}
	return (ptr);
}
