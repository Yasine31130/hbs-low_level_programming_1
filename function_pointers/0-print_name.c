#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Description
 * @name: pointer to char
 * @f: pointe to function
 * Return: nothing function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL)
	{
		f(name);
	}
}
