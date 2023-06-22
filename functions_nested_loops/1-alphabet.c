#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - DEscription
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}
