#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonal of a square matrix of integers
 * @a: 2D array
 * @size: param2
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int t1 = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		t1 += a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}
	printf("%d, %d\n", t1, tr);
}