#ifndef FUNCTION_POINTERS_H_
#define FUNCTIO_POINTERS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp) (int));

#endif