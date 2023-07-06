#include "main.h"
/**
 * int_sqrt - Description
 * @r: variable
 * @i: variable
 * Return: returns the natural square root of a number.
 */
int int_sqrt(int r, int i)
{
	if (i * i > r)
	{
		return (-1);
	}
	else if (i * i == r)
	{
		return (i);
	}
	else
	{
		return (int_sqrt(r, i + 1));
	}
}
/**
 * _sqrt_recursion - Description
 * @n: variable
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (int_sqrt(n, 0));
}
