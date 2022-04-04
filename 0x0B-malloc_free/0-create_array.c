#include "main.h"
#include <stdlib.h>
/**
 * *create_array - A function that creates an array of chars, and initilizes it with a spec char
 * @size: param1
 * @c: param2
 *
 * Return: A pointer or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

