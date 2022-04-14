#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of its parameter
 * @n: argument parameter
 *
 * Return: sum of argument parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list ap;
	va_start (ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return sum;
}
