#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: parameter1
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		*str++;
		_putchar(*str);
	}
	_putchar('\n');
}
