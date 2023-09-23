#include "lists.h"

/**
 * print_list - print elements
 * @h: pointer to head first node
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t countnode = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		/*count number of nodes*/
		countnode += 1;
	}

	/*print last node*/
	printf("[%d] %s\n", h->len, h->str);

    return (countnode);
}
