#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 * @n: constant of argument parameters
 *
 * Return: The entire strings and the separators between
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
    char *ptr;
	va_list ap;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
