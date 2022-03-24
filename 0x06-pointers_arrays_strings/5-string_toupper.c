#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @str: parameter1
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;
	int delt = 'a' - 'A';

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= delt;
		i++;
	}
	return (s);
}
