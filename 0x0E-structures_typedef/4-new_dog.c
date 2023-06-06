#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: function parametr
 * @age: function parameter
 * @owner: function parameter
 * Return: NULL during failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
