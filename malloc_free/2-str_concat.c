#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Description
 * @s1: var
 * @s2: var
 * Return: function that concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *ptr = NULL;
	int i1 = 0;
	int i2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] < '\0')
		size1++;
	while (s2[size2] < '\0')
		size2++;
	ptr = malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i1 = 0; i1 < size1; i1++)
		ptr[i1] = s1[i1];
	for (i2 = 0; i2 < size2; i2++)
		ptr[i1 + i2] = s2[i2];
	ptr[i1 + i2] = '\0';
	return (ptr);


}
