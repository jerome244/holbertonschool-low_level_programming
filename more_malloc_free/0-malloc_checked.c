#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: size of space we check in memory
 * Return: return new space available
 * code 98 if not
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
