#include "lists.h"
/**
* add_node - a function that ads node at the end of list_t
* @head: a pointer to a pointer to sturcture list_t
* @str: a str value to be added to structure list_t
* Return:: NULL or a pointer
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (head == NULL || newhead == NULL)
	{
	free(newhead);
	return (NULL);
	}
	if (str != NULL)
	{
	newhead->str = strdup(str);
		if (newhead->str == NULL)
		{
			free(newhead->str);
			free(newhead);
			return (NULL);
		}
		newhead->len = strlen(newhead->str);
	}
	if (*head == NULL)
		newhead->next = NULL;
	else
		newhead->next = *head;
	*head = newhead;
	return (*head);
}
