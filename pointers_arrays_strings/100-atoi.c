#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * @brief - our own atoi conversion program
 * @param [in] string - string that has the integer value init
 * @param [out] result - integer pointer that will have the final converted integer
 * _atoi - Description
 * @returns returns 0 on success and -1 on failure
 */
int _atoi(char *string, int *result)
{
	int num;
	int ret;
	int i;
	int len = strlen(string);

	for (i = 0; i < len; i++) 
	{
		if (!isdigit(string[i]))
			return -1;
	}

	ret = sscanf(string, "%d", &num);
	if (ret == 1) 
	{
		*result = num;
		return 0;
	}
	return -1;
}
