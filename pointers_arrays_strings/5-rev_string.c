#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	char t;
	int i, j, k = 0;

	for (i = 0; s[i]; i++)
		;
	j = i - 1;

	while (k < j)
	{
		t = s[k];
		s[k] = s[j];
		s[j] = t;
		k++;
		j--;
	}
}
