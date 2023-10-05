#include "main.h"
/**
 * binary_to_uint - converts binary in string to unsigned int.
 * @b: pointer to string
 * Return: converted int
 */

int power(int base, int exp)
{
	if (exp != 0)
		return (base * power(base, exp - 1));
	else
		return (1);
}

unsigned int binary_to_uint(const char *b)
{
	int i, dec, len;

	if (!b)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	len = i;
	dec = 0;
	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			continue;
		}
		else if (b[i] == '1')
		{
			dec += power(2, (len - i));
		}
		i--;
	}

	return (dec / 2);
}
