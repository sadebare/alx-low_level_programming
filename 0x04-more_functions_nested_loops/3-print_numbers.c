#include "main.h"

/**
 * print_numbers - function tat prints number from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
