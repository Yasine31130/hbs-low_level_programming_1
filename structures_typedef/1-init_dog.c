#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Short description
 * @d: pointer to struct
 * @name: pointer to name
 * @age: var
 * @owner: pointer to owner
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
