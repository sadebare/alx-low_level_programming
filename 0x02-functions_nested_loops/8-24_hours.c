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
	int a, b, c, d;

	for ( a = 0; a <= 50; a++)
	{
		for (b = 0; b <= 57; b++)
		{
			for (c = 0; c <= 53; c++)
			{
				for (d = 0; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
					break;
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
				
			}
			
		}
		
	}
	
}
