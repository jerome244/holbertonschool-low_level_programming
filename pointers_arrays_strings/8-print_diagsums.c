#include <stdio.h>

/**
 * print_diagsums - print two diagonals of a square matrix of two int
 * @a: multidimensional array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, b = 0, sum = 0;

	for (i = 0; i < size; ++i)
	{
		sum += a[i * (size + 1)];
		b += a[(i + 1) * (size- 1)];

	}
	printf("%d, %d\n", sum, b);
}
