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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
