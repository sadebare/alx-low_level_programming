#include "main.h"
/**
 * _islower - A function to check for lowercase character
 *
 *@c: checking for lower case character
 *
 * Return: 1 if int c is lowercase else 0 if therwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
