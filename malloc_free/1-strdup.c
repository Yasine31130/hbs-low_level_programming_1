#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - Description
 * @str: var
 * Return: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int i = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
