#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - check the code
 * @d : pointer to struct
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
}
