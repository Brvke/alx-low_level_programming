#include "dog.h"
/**
* init_dog - initalizes dog structure
* @d: pointer to struct
* @name: first data point
* @age: second data point
* @owner: third data point
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
