#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - check the code
 * @name : name of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = strdup(name);
	ptr->owner = strdup(owner);
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	return (ptr);
}
