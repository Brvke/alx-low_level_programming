#include <ctype.h>
/**
 * _islower - checks if c is lowercase or uppercasae
 * @c: is vriable to be checked
 * Return: 1 if 'c'is lowercase 0 if not
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
