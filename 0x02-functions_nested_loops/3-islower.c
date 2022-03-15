#include "main.h"
/**
 * _islower - A function to check for lowercase character
 *
 * Result - Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
