#include <string.h>

/**
 * _strlen - return length of string
 * @s: array of char
 * Return: int
 */

/**
 * palinHelper - check if palindrome
 * @s: string
 * @left: value of string
 * @right: value of string
 * Return: 1 if palin else 0
 */

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
	if (palinHelper(s, 0, strlen(s) - 1))
		return (1);
	else
		return (0);
}
