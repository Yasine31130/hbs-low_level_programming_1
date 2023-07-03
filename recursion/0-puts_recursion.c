#include "main.h"
/**
 * _puts_recursion - Description
 * @s: pntr
 * Return:
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
