#include <stdlib.h>
#include "dog.h"

typedef struct
{
    char *name;
    int age;
}
	dog_t;

void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d);
    }
}
