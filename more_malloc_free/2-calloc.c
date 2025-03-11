#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocate memory with calloc
 * set to 0
 * @nmemb: number of member of array
 * @size: size of n member elements
 * Return: return pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < nmemb * size; count++)
	{
		ptr[count] = 0;
	}
	return (ptr);
}
