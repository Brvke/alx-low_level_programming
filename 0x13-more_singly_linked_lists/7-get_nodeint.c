#include "lists.h"
/**
 * get_nodeint_at_index - find the node of a linked list
 * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int icount;

	if (head == NULL)
		return (NULL);

	icount = 0;
	node = head;
	while (node != NULL)
	{
		if (icount == index)
			return (node);
		node = node->next;
		icount++;
	}
	return (NULL);
}
