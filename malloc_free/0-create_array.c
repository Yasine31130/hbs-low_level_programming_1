#include <stdlib.h>
#include "main.h"
/**
 * create_array - Description
 * @size: var size of array
 * @c: var char on array
 * Return: creates an array of chars, and initializes it with a specific char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (malloc(sizeof(char) * size));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);

}
