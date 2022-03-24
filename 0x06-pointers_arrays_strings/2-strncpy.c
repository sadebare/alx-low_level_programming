#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
