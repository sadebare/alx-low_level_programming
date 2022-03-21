#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: parameter1
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
		_putchar(str[len]);
	}
	_putchar('\n');
}
