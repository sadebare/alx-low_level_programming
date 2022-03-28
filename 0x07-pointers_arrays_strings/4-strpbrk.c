#include "main.h"
/**
 * _strpbrk: function that searches a string for any of a set of bytes
 * @s: param1
 * @accept: param2
 *
 * Return: matches found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}
	return (NULL);
}
