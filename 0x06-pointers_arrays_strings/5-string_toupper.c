#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: parameter1
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;
	int delt = 'a' - 'A';

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= delt;
		i++;
	}
	return (s);
}
