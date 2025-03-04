/**
 * factorial - return factorial number
 * in recursive style
 *
 * @n: given number
 * Return: factorial number
 */

int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (1);
}
