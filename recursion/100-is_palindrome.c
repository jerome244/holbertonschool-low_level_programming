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

int palinHelper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (palinHelper(s, left + 1, right - 1));
}

/**
 * is_palindrome - check if a string is palindrome or not
 * @s: string entry
 * Return: 1 if yes else 0
 */

int is_palindrome(char *s)
{
	if (palinHelper(s, 0, _strlen(s) - 1))
		return (1);
	else
		return (0);
}
