#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Description
 * @s1: pointer first char
 * @s2: pointer second char
 * @n: size of s2
 * Return: function that concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0;
	int size2 = n;
	char *ptr = NULL;
	int i1 = 0;
	int i2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	ptr = malloc((size1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i1 = 0; i1 < size1; i1++)
		ptr[i1] = s1[i1];
	for (i2 = 0; i2 < size2; i2++)
		ptr[i1 + i2] = s2[i2];
	ptr[i1 + i2] = '\0';
	return (ptr);


}
