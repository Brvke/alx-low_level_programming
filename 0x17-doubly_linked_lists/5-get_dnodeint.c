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
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
