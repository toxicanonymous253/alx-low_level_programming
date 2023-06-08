#include "function.h"

/**
 * print_name - function that prints name
 * @name: function parameter that points to a char data type
 * @f: function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
