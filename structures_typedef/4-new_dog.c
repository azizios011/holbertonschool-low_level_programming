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
	dog_t *ptr = (dog_t *) malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = (char *) malloc(strlen(name) + 1);
	ptr->owner = (char *) malloc(strlen(owner) + 1);
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
