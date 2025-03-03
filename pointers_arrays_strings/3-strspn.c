/**
 * _strspn - count number
 * @s: string 1
 * @accept: string 2
 * Return: number of characters before occurence is met
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	
	for (i = 0, j = 0; accept[j] != '\0' && s[i] != '\0'; j++)
	{
		if (accept[j] == s[i])
		{
			i++;
			j = 0;
		}
		if (accept[j] != s[i] && accept[j] == '\0')
		{
			break;
		}
	}
	return (i + 1);
}
