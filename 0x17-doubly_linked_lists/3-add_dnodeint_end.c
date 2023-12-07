#include "lists.h"
/**
 * add_dnodeint_end - added a node at the end of doubly linked list
 * @head: head of linked list
 * @n: integer value of new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || head == NULL)
	{
		free(newnode);
		perror("Error: ");
		return (NULL);
	}
	temp = *head;
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
	}
	return (newnode);
}
