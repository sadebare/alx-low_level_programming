#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - A function that returns a pointer to a newly allocated space in memory
 * @str: param1
 *
 * Return: pointer to the duplicatd string else NULL
 */
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	strDup = malloc(sizeof(char) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
