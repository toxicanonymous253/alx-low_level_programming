#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>

/**
 * op_t - typdef of struct
 * @operator: function parameter
 * @operation: functiob pointer
 * Descriptio: longer description
 */

typedef struct
{
	const char *operator;
	int (*operation)(int, int);
}op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
