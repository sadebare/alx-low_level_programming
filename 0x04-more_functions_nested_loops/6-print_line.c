#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 */
void print_line(int n)
{

	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar(45);
	}
	_putchar('\n');
}
