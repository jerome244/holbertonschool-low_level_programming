/**
 * int_index - search an int in an array of int
 * @array: array of int
 * @size: size of the array
 * @cmp: existed functions that compares an int
 * Return: -1 if no match or if inferior to 0
 * if match return number of the index of the arr
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
