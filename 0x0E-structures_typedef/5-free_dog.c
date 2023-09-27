#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the space
 * allocated for the dog struct
 *
 * @d: pointer to the dog struct
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
