#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - Description
 * @width: var
 * @height: var
 * Return: function that returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i = 0;
	int column = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * width);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (column = 0; column < width; column++)
	{
		ptr[column] = malloc(sizeof(int) * height);
		if (ptr[column] == NULL)
		{
			for (i = 0; i < column; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}

	return (ptr);
}
