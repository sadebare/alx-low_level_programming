#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: parameter1
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
