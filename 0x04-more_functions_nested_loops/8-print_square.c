#include "main.h"
/**
 * print_square - function that prints a square followed by a new line
 * @size: parameter1
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; i <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
