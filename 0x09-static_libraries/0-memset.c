#include "main.h"
/**
 * _memset - function that fills memory with a constanct byte.
 * @s: param1
 * @b: param2
 * @n: param3
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
