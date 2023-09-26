#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head of linked list
 * Return: value of n
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int n;

	newhead = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = newhead->next;
	n = newhead->n;
	free(newhead);
	return (n);
}
