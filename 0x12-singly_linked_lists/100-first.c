#include "lists.h"
/*
* calledFirst- function that calls element before the main
* Return: void (no return);
*/
void __attribute__((constructor)) calledFirst()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
