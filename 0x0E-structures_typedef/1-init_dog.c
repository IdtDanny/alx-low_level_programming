#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: pointer to structure to be initialised.
 * @name: pointer to dogs' name
 * @age: dogs' age
 * @owner: dogs' owner
 *
 * return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
