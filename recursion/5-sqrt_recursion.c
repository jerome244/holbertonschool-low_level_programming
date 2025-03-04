/**
 * support_function - support for conditioning the root calculations
 * @number: user entry
 * @root: root number
 * Return: -1 if number entry does not have root
 * else return root result
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

/**
 * _sqrt_recursion - calculation of natural square root of a number
 * @n: entry
 * Return: result of the calculation
 */
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
