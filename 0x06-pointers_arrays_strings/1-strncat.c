#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: parameter1
 * @src: paramater2
 * @n: parameter3
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
