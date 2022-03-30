#include "main.h"
/**
 * _sqrt_recursion - Function that returns the square root of a number
 * @n: param1
 *
 * Return: Square root of the number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return ( _sqrt_recursion(2, n, n));
}
