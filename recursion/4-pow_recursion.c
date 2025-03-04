/**
 * _pow_recursion - return value of x
 * raised by power of y
 *
 * @x: receiver
 * @y: powered of
 * Return: if lower 0 return -1
 * else return the result of calculation
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
