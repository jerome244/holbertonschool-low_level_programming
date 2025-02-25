#include "main.h"
#include <stdio.h>

/**
 * print_array - print values content in int arrays
 * @a: name of array of int type
 * @n: number of member
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
