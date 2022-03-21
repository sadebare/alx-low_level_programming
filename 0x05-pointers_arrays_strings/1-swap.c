#include "main.h"
/**
 * swap_int - A function that swaps two integers
 * @a: parameter1
 * @b: parameter2
 *
 * Return: Always success (0)
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
