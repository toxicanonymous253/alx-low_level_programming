#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: function parameter
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	int format_length = 0;

	va_list args;

	va_start(args, format);

	while	(format[format_length] != '\0')
		format_length++;

	while (index < format_length)
	{

		if (format[index] == 'c')
		{
			int c = va_arg(args, int);
			printf("%c, ", c);
		}
		else if (format[index] == 'i')
		{
			int i = va_arg(args, int);
			printf("%d, ", i);
		}
		else if (format[index] == 'f')
		{
			float f = va_arg (args, double);
			printf("%f, ", f);
		}
		else if (format[index] == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
		}
		index++;
	}
	printf("\n");

	va_end(args);
}
