#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 *@n: parameter
 *
 * Return: no return
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
