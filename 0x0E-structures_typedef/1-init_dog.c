#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializing the struct dog
 * @d: pointer the the struct dog
 * @name: pointer to name
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
