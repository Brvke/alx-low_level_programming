#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of linked list
 * Return: reversed result
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *pre;

	pre = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
