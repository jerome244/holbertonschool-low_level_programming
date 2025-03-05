/**
 * _strlen - return length of string
 * @s: array of char
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * is_palindrome - check if a string is palindrome or not
 * @s: string entry
 * Return: 1 if yes else 0
 */

int is_palindrome(char *s)
{
	char *end = s + _strlen(s);

	while (end > s)
		if (*(--end) != *(s++))
			return (0);
	return (1);
}
