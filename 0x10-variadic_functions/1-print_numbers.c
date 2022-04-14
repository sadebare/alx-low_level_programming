#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers
 * @n: argument start parameter
 *
 * Return: The whole number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%c", separator);
	}
	va_end(ap);
	printf("\n");
}
