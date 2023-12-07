#include  "lists.h"
/**
 * dlistint_len - prints value of a doubly linked list
 * @h: pointer to head of doubly linked list
 * Return: the number of nodes or 0
*/
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count;

	temp = (dlistint_t *) h;
	count = 0;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
