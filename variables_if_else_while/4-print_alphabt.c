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
		if (lettre != 'q' && lettre != 'e')

		{
			putchar(lettre);
			lettre++;
		}
	}
	putchar('\n');

	return (0);
}
