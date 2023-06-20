#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, N;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	N = n % 10;
	if (N > 5)
	{
		printf("Last digit of %d is %d and  is greater than 5\n", n, N);
	}
	else if (N == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, N);
	}
	else if ((N < 6) && (N != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, N);
	}
	return (0);
}
