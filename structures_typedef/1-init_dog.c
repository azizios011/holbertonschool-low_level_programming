#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @d : pointer
 * @name : var
 * @owner : var
 * @age : var
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
