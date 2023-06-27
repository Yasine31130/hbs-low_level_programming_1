#include "main.h"
/**
 * swap_int - Description
 * @a: variable
 * @b: variable
 * Return: switch variables value
 */
void swap_int(int *a, int *b)
{
	int change = 0;

	change = *a;
	*a = *b;
	*b = change;
}
