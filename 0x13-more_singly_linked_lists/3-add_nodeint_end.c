#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @n: int to add
 * Return: starting addr of the list or NULL if fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;

	temp = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		/** iteration */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->next = NULL;
	}
	return (*head);
}

