#include "main.h"
/**
* _memset - prints char b on pointer ptr of size n
*@b: charachter to be printed on ptr
*@ptr: pointer
*@n: size of ptr
*Return: ptr
*/
char *_memset(char *ptr, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = b;
	return (ptr);
}
/**
 *_calloc - dynamically sets a ptr of size nmeb*size
 *@nmemb: array size
 *@size: size of array elemnt
 *Return: ptr if sucess or null if not;
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if  (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
