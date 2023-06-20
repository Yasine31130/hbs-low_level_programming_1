#include <stdio.h>
#include <stdlib.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphmin;
	char alphmaj;

	for (alphmin = 'a'; alphmin <= 'z'; alphmin++)
	{
		putchar(alphmin);
	}
	for (alphmaj = 'A'; alphmaj <= 'Z'; alphmaj++)
	{
		putchar(alphmaj);
	}
	putchar('\n');
	return (0);
}
