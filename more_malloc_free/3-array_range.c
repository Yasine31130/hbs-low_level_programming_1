#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Description
 * @min: var
 * @max: var
 * Return: function that creates an array of integers
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int size = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
