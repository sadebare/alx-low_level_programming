#include "main.h"
/**
 * print_rev - functon that prints a string in reverse
 * @s: parameter1
 *
 * Return: Always success (0)
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
