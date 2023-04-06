#ifndef dog_H
#define dog_H
/**
 * struct dog - Entry point.
 * @name : name of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
