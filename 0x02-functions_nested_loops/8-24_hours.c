#include "main.h"
/**
 * jack_bauer - A function that prints every minutes of the day
 *
 * @c: 
 *
 * Return: Time of minutes and hours
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{	
		for (m = 0; h < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
