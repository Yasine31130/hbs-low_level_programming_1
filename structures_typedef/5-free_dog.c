#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Description
 * @d: pntr
 * Return: function that frees dogs
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
