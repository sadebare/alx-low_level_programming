#include "main.h"
/**
 * _strchr - function that locate a character in a string
 * @s: param1
 * @c: param2
 *
 * Return: A pointer to a character
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
