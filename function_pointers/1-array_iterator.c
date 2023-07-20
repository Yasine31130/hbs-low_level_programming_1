#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Description
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: executes a function given as a parameter on each element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
