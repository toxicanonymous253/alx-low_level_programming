#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: function parameter
 * Return: int
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int *nums;
	int s = 0;

	va_list args;

	va_start(args, n);
	nums = malloc(sizeof(int) * n);

	if (nums == NULL)
	{
		va_end(args);/*To ensure proper clean up*/
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		nums[i] = x;
	}

	va_end(args);

	for (i = 0; i < n; i++)
	{
		s += nums[i];
	}

	free(nums);

	return (s);
}
