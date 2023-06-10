#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line
 * @n: function parameter
 * @separator: function parameter
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int *nums;

	va_list args;

	va_start(args, n);

	if (separator == ((void *)0))
		return;


	nums = (int *)malloc(sizeof(int) * n);

	if (nums == ((void *)0))
		return;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		nums[i] = x;

		printf("%d", nums[i]);

		if (*separator != '\0' && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
	free(nums);
}
