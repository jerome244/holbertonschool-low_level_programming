/**
 * binary_to_uint - convert binary string to an int
 * @b: string containing the binary number
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	for (; b && *b; b++)
	{
		decimal *= 2;
		if (*b == '1' || *b == '0')
			decimal += *b - '0';
		else
			return (0);
	}
	return (decimal);
}
