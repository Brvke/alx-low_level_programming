#include "lists.h"
/**
* free_listint - free a singly linked list
* @head: head of linked list to free
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
