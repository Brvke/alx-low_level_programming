#include "lists.h"
/**
* add_nodeint - adds a node at the start of the linked list
*
* @head: a pointer to a linked list
* @n: value of the first linked list element
*
* Return: returns a pointer to new list or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));

	if (head == NULL || newhead == NULL)
		return (NULL);

	newhead->n = n;
	if (*head == NULL)
		newhead->next = NULL;
	else
		newhead->next = *head;
	*head = newhead;
	return (*head);
}
