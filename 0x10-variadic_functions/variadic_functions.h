#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_all(const char * const format, ...);
/**
 * struct typ - Struct operators
 *
 * @c: Char
 * @tp: The function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
#endif
