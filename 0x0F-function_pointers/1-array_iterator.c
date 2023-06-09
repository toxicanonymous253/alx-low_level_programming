#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: function parameter
 * @size: function parameter
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	int *array_malloc;

	array_malloc = (int *) malloc(sizeof(int) * size);

	if (array_malloc == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		array_malloc[i] = array[i];
		(*action)(array_malloc[i]);
	}
	free(array_malloc);
}
