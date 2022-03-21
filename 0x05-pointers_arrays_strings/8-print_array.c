#include <stdio.h>
/**
 * print_array - A function that prints n element of an array of integer
 * @a: parameter1
 * @n: parameter2
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
