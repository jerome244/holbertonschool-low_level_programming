/**
 * _strspn - count number
 * @s: string 1
 * @accept: string 2
 * Return: number of characters before occurence is met
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != accept[j] && s[i] != '\0' && accept[j] != '\0')
	{
		j++;
		if (s[i] == accept[j])
		{
			return (j + 2);
		}
	}
	return (j + 2);
}
