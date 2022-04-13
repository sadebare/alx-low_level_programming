#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: name 
 * @*f: pointer to name
 *
 * Return: Always success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
