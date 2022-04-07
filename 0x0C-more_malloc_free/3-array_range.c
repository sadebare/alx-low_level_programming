#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - Function that prints array of integers
 * @min: param1
 * @max: param2
 *
 * Return: ponter
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
