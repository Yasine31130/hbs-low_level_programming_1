#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Description
 * @argc: var
 * @argv: var
 * Return: multiplies two numbers
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
