#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: param1
 *
 * Return: The pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ans = malloc(b);

	if (ans == NULL)
		exit(98);
	return (ans);
}
