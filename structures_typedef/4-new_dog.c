#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Description
 * @name: pointer
 * @age: var
 * @owner: pointer
 * Return: function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int n = 0;
	unsigned int o = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	while (name[n] != '\0')
	{
		n++;
	}
	while (owner[o] != '\0')
	{
		o++;
	}
	d->name = malloc(sizeof(char) * (n + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (o + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
