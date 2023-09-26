#include "lists.h"
/**
* listint_len - count the length of the structure elements
* @h: linked list to print
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t countnode;

	countnode = 0;
	while (h != NULL)
	{
		h = h->next;
		countnode++;
	}
	return (countnode);
}
