#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Description
 * @n: variable
 * Return: go from n to 98
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
