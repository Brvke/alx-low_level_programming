#include "lists.h"

/**
 * print_list - print elements
 * @h: pointer to head first node
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
