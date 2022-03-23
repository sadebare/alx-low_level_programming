#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	
	dest[i] = '\0';

	return (dest);
}
