#include "main.h"

/**
 * binary_to_uint - converts binary in string to
 * unsigned int.
 * @b: pointer to string.
 * Return: integer representation of the binary
 * if successful, 0 otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	int ct, res, len;

	if (!b)
		return (0);
	ct = 0;
	while (b[ct] != '\0')
	{
		if (b[ct] == '0' || b[ct] == '1')
			ct++;
		else
			return (0);
	}
	len = ct;
	res = 0;
	while (ct >= 0)
	{
		if (b[ct] == '0')
		{
			ct--;
			continue;
		}
		else if (b[ct] == '1')
		{
			res += power(2, (len - ct));
		}
		ct--;
	}

	return (res / 2);
}

/**
 * power - returns the result of multiplying
 * the base a times.
 * @base: the base of the power eqn.
 * @a: the number used as a multiplier
 * Return: the result of multiplying the base a times.
 */

int power(int base, int a)
{
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return (1);
}
