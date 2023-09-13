#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initailization of dog variable type
 * @d: pointer to be initailised for new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

