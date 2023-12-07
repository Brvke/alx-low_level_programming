#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at the index.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node, starting from 0
 * Return: node at index if it exists, NULL otherwise.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t size;

	if (!head)
		return (NULL);

	size = 0;

	while (head->next)
	{
		if (size == index)
			return (head);
		size++;
		head = head->next;
	}

	return (NULL);
}
