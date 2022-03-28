#include "main.h"
/**
 * _strspn - function that gets te length of a prefix substring
 * @s: param1
 * @accept: param2
 *
 * Return: segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++);
		if (s[i] == accept[j])
			len++;
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
