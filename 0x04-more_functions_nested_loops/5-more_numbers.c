#include "main.h"
/**
 * more_function - function that prints 10 times the number from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			_putchar(b + '0');
		}
	_putchar('\n');
	}
}

