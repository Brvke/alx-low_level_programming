#include "lists.h"
/**
* free_listint2 - frees an in iteration
* @head: head of list to be cleared
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			listint_t *temp = current;

			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
