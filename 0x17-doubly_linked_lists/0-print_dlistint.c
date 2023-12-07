#include  "lists.h"
/**
 * print_dlistint - prints value of a doubly linked list
 * @h: pointer to head of doubly linked list
 * Return: the number of nodes or 0
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count;

	temp = (dlistint_t *) h;
	count = 0;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
