#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0 + 1; i <= 9; i++)
		{
			putchar(c + '0');
			putchar((i + c) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
