#include <stdio.h>
#include <stdlib.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphmin, alphmaj;

	for (alphmin = 'a'; 'a' < 'z'; alphmin++)
	{
		putchar(alphmin);
	}
	for (alphmaj = 'A'; 'A' < 'Z'; alphmaj++)
	{
		putchar(alphmaj);
	}
	putchar('\n');
	return (0);
}
