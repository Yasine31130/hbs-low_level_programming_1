#include "main.h"
/**
 * print_last_digit - Description
 * @n: variable
 * Return: print only the last digit of a number
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
