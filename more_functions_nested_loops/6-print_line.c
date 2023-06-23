#include "main.h"
/**
 * print_line - Description
 * @n: variable
 * Return: if n = 10 it prints 10 times "_"
 */
void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
