#include "main.h"
#include <unistd.h>
/**
 * _islower - DEscription function that checks for lowercase character
 * @c: is the variable
 * Return: 1 if lower char or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
