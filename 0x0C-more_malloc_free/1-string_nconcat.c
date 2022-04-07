#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: param1
 * @s2: param2
 * @n: param3
 *
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	char *strDup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	strDup = malloc(sizeof(char) * (i + n + 1));
	if (strDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++;
		j++;
	}
	strDup[i] = '\0';
	return (strDup);
}
