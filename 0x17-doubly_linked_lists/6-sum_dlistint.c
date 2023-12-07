#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in the list.
 * @head: pointer to the head of the linked list.
 * Return: Sum of the data in the list, 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
