#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Description
 * @b: var
 * Return: function that allocates memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
