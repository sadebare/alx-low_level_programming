#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter1
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
