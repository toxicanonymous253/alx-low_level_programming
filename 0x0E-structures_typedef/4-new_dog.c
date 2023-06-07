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
	dog_t *new;
	int len1 = strlen(name);
	int len2 = strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = (char *)malloc(sizeof(char) * (len1 + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = (char *)malloc(sizeof(char) * (len2 + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
	strcpy(new->name, name);
	strcpy(new->owner, owner);

	return (new);
}
