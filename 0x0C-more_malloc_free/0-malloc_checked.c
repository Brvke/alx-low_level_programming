#include "main.h"
/**
* malloc_checked - function that allocates meomry using malloc
*
*@b: size of memory
*Return: pointer if suscess and exit with 98 if not
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
