#include "search_algos.h"
#include <stdio.h>
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL || size == 0)
    {
        return NULL;
    }

    size_t jump_step = sqrt(size);

    listint_t *curr = list;
    listint_t *nxt = list;

    while (nxt != NULL && nxt->index <= size && nxt->n < value)
    {
        curr = nxt;
        nxt = curr->nxt;
        for (size_t i = 0; i < jump_step && nxt != NULL; i++)
        {
            nxt = nxt->nxt;
        }
        printf("%d\n", curr->n);
    }

    while (curr != NULL && curr->n <= value)
    {
        printf("%d\n", curr->n);
        if (curr->n == value)
        {
            return curr;
        }
        curr = curr ->nxt;
    }

    return NULL;
}	
