#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at index idx
* @head: head of linked list
* @idx: index for new node
* @n: node value
* Return: pointer to new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int icount;
	listint_t *temp, *newnode, *prenode;

	newnode = malloc(sizeof(listint_t));
	prenode = malloc(sizeof(listint_t));
	if (head == NULL || newnode == NULL || prenode == NULL)
		return (NULL);

	temp = *head;
	icount = 0;
	newnode->n = n;
	if (idx == 0 && *head == NULL)
	{
		newnode->next = NULL;
		return (newnode);
	}
	else if (idx == 0 && *head != NULL)
	{
		prenode = *head;
		newnode->next= prenode;
		*head = newnode;
		return (*head);
	}
	while (icount < idx)
	{
		if(temp != NULL)
			temp = temp->next;
		else
		{
			printf("outside of range");
			return (NULL);
		}
		icount++;
	}
	prenode = temp->next;
	temp->next = newnode;
	newnode->next = prenode;
	return (newnode);
}
