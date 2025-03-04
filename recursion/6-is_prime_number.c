/**
 * is_prime_number - indicate if entry is a prime number
 * @n: entry
 * Return: 1 if it is 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % 2 == 0)
		return (0);
	if (2 * 2 > n)
		return (1);
	return (is_prime_number(2 + 1));
}
