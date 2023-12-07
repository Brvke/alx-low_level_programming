#include "lists.h"
/**
 * add_dnodeint - added a node at the head of doubly linked list
 *
 * @head: head of linked list
 * @n: int value of new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (new);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if ((*head) != NULL)
	{
		new->next = (*head);
		(*head)->prev = new;
	}

	*head = new;
	return (new);
}
