#include "lists.h"

/**
 * list_len - gets the number of nodes
 * @h: pointer to the head
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t countnode = 1;

	/*if head is NULL return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count node*/
		countnode++;
	}

	return (countnode);
}
