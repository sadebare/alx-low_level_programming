#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: param1
 * @size: param2
 *
 * Return: _calloc pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		*(memory + i) = 0;

	return ((void *)memory);
}
