#include <stdlib.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	int valeur = 48;

	while (valeur < 102)
	{
		if (valeur == 58)
		{
			valeur = 97;
		}
	putchar(valeur);
	}
	putchar('\n');
	return (0);
}
