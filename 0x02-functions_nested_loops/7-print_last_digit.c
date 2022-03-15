#include "main.h"
/**
 *
 * print_last_digit - This function prints out the last digit of a number
 *
 * @n: print last digit of a number
 *
 * Return: Last digit of a number
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = (-1 * l);
	}

	_putchar(l + '0');

	return (l);
}


