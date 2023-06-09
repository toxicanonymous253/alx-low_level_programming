#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: function parameter that points to a char data type
 * @f: function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	char *mem;

	mem = malloc(sizeof(char));
	if (mem == NULL)
		return;

	strcpy(mem, name);

	(*f)(mem);

	free(mem);
}
