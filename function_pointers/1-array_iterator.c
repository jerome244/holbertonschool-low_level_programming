#include <stddef.h>

/**
 * array_iterator - execute an existing function on each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: print_elem or print_elem_hex function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
