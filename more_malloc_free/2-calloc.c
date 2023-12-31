#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Description
 * @nmemb: var
 * @size: var
 * Return:  function that allocates memory for an array, using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);

	return (ptr);
}
