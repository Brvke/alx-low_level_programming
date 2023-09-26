#include "lists.h"
/**
* sum_listint - sums the values of n
*@head: pointer to head of linked list
* Return: sum or if null 0
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;
	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
