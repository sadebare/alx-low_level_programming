#include "main.h"

/**
 * print_binary - Function that converts binary to a number.
 * @n: Number convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}