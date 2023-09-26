#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node.
 * @head: pointer to the head of the linked list.
 * @index: index.
 * Return: value of deleted node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *pre;
	unsigned int count;

	if (!(*head))
		return (-1);

	current = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}

	count = 0;
	while (count != (index) && current)
	{
		pre = current;
		current = current->next;
		count++;
	}
	if (count != index)
	{
		return (-1);
	}

	pre->next = current->next;
	free(current);
	return (1);
}
