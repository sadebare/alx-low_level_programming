#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Result - Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int no = 0;

	while (no < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		no++;
		_putchar('\n');
	}
}
