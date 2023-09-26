#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at index idx
* @head: head of linked list
* @idx: index for new node
* @n: node value
* Return: pointer to new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int icount;
	listint_t *current, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (!(*head))
	{
		newnode->next = NULL;
		return (newnode);
	}
	current = (*head);

	icount = 0;
	while (icount != (idx - 1) && current)
	{
		current = current->next;
		icount++;
	}

	if (icount != (idx - 1))
		return (NULL);
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
