#include <stdio.h>
#include <stdlib.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (!(lettre == 'e' && lettre == 'q'))
		{
			putchar(lettre);
			lettre++;
		}
	}
	putchar('\n');

	return (0);
}
