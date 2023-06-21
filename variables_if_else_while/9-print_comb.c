#include <stdlib.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i < 57)
	{
		if (i < 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar(i);
	putchar('\n');
	return (0);
}
