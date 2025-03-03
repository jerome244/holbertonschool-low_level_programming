/**
 * _memcpy - copy memory area
 * @dest: char array of destination
 * @src: char array from source
 * @n: size of array
 * Return: character array copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (cdest);
}
