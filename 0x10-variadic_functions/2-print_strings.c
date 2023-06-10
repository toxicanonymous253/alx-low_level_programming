#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: function parameter
 * @n: function parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str_malloc;

	va_list args;

	va_start(args, n);

	str_malloc = (char *)malloc(sizeof(char) * n);

	if (str_malloc == ((void *)0))
		return;

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		strcpy(str_malloc, str);

		printf("%s", str_malloc);

		if (*separator != '\0' && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	free(str_malloc);
	printf("\n");
}
