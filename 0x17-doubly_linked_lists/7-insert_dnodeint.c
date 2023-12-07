#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a node at
 *                            the nth of a doubly linked list
 *
 * @h: a pointer to the linked list first pointer
 * @idx: the index of the node to be added counted form 0
 * @n:value of n at the idx node
 *
 * Return: a pointer the new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int cur_idx;

	new = malloc(sizeof(dlistint_t));
	if (!new || !*h)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	cur_idx = 0;
	curr = *h;
	while (curr)
	{
		if (cur_idx == idx)
		{
			new->next = curr;
			new->prev = curr->prev;
			new->prev->next = new;
			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		cur_idx++;
	}
	return (NULL);
}
