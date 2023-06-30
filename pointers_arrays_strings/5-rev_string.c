/**
 *rev_string - prints a string in reverse from the orignal
 *@s: String to print in reverse
 *Return: 0
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = _strlen(s) - 1;
	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
}
