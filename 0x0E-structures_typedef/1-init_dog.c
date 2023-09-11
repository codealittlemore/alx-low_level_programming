#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type struct dog
 * @d: pointer to initialize
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = (struct dog *)malloc(sizeof(struct dog));

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
