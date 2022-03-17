#include "main.h"
/**
 * _isupper - Function that returns 1 if uppercase else 0
 *
 * @c: function parameter
 *
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
