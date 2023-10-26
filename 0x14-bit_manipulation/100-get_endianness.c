#include "main.h"

/**
* get_endianness - shows if program is running on little or big endian
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
