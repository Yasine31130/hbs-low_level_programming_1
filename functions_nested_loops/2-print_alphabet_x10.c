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
/**
 * print_alphabet_x10 - DEscription
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
}
