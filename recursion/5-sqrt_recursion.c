/**
 * _sqrt_recursion - return natural square root of a number
 * @n: entry
 * Return: result of the calculation
 */

int support_function(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (support_function(number, root + 1));
	}
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (support_function(n, 0));
	}
}
