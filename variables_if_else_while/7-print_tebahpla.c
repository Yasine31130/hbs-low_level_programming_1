#include <stdlib.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char apharev = 'z';

	while (apharev >= 'a')
	{
		putchar(apharev);
		apharev--;
	}
	putchar('\n');
	return (0);
}
