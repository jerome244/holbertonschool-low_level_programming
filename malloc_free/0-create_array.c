#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of array
 * @c: specific character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (size > 0)
		ptr = malloc(size);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
