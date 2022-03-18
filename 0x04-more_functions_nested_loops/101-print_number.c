#incude "main.h"
/**
 * print_number - function that prints an integer
 * @n: parameter1
 *
 * Return: The number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar((n * -1) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
