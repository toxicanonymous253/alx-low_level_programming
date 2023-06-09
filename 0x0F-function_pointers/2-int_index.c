#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: function parameter
 * @size: function parameter
 * @cmp: pointer to a function
 * Return: index of the numbers
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int i = 0;
	int *array_malloc;

	array_malloc = (int *)malloc(sizeof(int) * size);

	if (array_malloc == NULL)
		return(0);

	for (; i < size; i++)
	{
		array_malloc[i] = array[i];
		if ((*cmp)(array_malloc[i]))
			return (i);
	}
	return (i);
	free(array_malloc);
}
