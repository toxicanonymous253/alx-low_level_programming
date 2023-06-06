#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct dog - short desctiption
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
