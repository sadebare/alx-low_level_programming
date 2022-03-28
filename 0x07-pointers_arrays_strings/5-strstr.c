#include "main.h"
/**
 * _strstr - function that locate a substring
 * @haystack: param1
 * @needle: param2
 *
 * Return: pointer to the beginning of the located substring or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0; b = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] != '\0')
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++
	}
	return ('\0');
}
