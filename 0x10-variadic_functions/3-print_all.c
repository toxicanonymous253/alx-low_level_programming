#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: function parameter
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int format_specifier;
	int index = 0;
	int format_length = 0;

	va_list args;

	va_start(args, format);

	while	(format[format_length] != '\0')
		format_length++;

	while (index < format_length)
	{
		format_specifier = format[index];
		index++;

		if (format_specifier == 'c')
		{
			int c = va_arg(args, int);
			printf("%c, ", c);
		}
		else if (format_specifier == 'i')
		{
			int i = va_arg(args, int);
			printf("%d, ", i);
		}
		else if (format_specifier == 'f')
		{
			float f = va_arg (args, double);
			printf("%f, ", f);
		}
		else if (format_specifier == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
		}
	}
	printf("\n");
	va_end(args);
}
