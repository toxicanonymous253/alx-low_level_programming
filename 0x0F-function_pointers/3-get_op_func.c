#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
		return (NULL);

	op_t *current_op = ops;

	while (current_op->operator != NULL)
	{
		int result = current_op->operation();
	}

}
