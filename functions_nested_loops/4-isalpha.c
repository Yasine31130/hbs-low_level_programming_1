#include "main.h"
#include <unistd.h>
/**
 * _isalpha - Description
 * @c: is the variable
 * Return: 1 if alpha or 0 if is not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
