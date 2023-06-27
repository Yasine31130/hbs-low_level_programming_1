#include "main.h"
/**
 * _strlen  - Description
 * @s: variable
 * Return: count num of char
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
