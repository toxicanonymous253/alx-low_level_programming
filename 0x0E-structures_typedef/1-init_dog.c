#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * struct dog: short description
 * @d: pointer to struct dog
 * @name: functional parameter
 * @age: functional parameter
 * @owner: functional parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
