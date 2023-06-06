#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: function parameter that points to struct dog
 * Return: NULL during failure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		d->name = malloc(sizeof(char *) * (strlen("(nil)") + 1));
		strcpy(d->name, "(nil)");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
