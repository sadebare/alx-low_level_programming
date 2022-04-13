#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: name 
 * @*f: pointer to name
 *
 * Return: Always success
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
