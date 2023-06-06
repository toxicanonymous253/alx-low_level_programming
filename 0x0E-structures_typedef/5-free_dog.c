#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: function parameter
 */

void free_dog(dog_t *d)
{
	free(d);
}
