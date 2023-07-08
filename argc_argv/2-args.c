#include <stdio.h>
/**
 * main - Description
 * @argc: var
 * @argv: var
 * Return: prints all arguments it receives
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
