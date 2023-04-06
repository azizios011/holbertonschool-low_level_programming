#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d : pointer to struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	printf("age: %f\n", d->age);
}
