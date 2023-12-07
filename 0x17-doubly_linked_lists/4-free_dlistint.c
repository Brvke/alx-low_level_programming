#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of struct
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
