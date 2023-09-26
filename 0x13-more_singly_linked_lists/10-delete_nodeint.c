#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node
 * @head: pointer to the head of the linked list
 * @index: index
 * Return: value of deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int icount;

	if (!(*head))
		return (-1);

	current = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}

	icount = 0;
	while (icount != (index) && current)
	{
		temp = current;
		current = current->next;
		icount++;
	}
	if (icount != index)
	{
		return (-1);
	}

	temp->next = current->next;
	free(current);
	return (1);
}
