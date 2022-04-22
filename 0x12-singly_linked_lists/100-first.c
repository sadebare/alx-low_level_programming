#include "lists.h"
/*
 * calledFirst - function that prints before the main
 *
 * Return: Void
 */

void __attribute__((constructor)) calledFirst()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("bore my house upon my back!\n");

}
