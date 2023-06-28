#include "main.h"
/**
 * _puts - Description
 * @str: variable
 * Return: shows str followed by a new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
