#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b:Pointing to a string of 0 and 1 chars.
 * Return:  the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsint = 0;

		if (b == NULL)
			return (0);
		while (*b)
		{
			if (*b != '0' && *b != '1')
				return (0);
			unsint = unsint << 1;
			if (*b == '1')
				unsint = unsint ^ 1;
			b++;
		}
	return (unsint);
}
