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
	ptr = malloc(sizeof(char) * b);

	return (ptr);
}
