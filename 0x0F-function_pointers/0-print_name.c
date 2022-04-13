#include "function_pointers.h"
#include <stdio.h>
#include "stdlib.h"
/**
 * print_name - A function that prints a name
 * @name: pointer to char
 * @*f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
