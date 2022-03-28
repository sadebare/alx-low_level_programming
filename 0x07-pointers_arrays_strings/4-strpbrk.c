#include "main.h"
/**
 * _strpbrk: function that searches a string for any of a set of bytes
 * @s: param1
 * @accept: param2
 *
 * Return: matches found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
