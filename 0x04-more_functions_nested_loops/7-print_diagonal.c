#include "main.h"

/**
 * print_diagonal - function that draw a diagonal line on the terminal
 * @n: parameter1
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar(45);
			for (j = 0; j <= n; j++)
			{
				if (i == j)
					_putchar('\\');
					_putchar('\n');
				else
					_putchar(' ');
			}
			
			_putchar('\n');
		}
	}
}
