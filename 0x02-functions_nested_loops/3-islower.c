#include "main.h"
/**
 * _islower - A function to check for lowercase character
 *
 *@c: checking for lower case character
 *
 * Result - Return 1 if c is lower case else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
