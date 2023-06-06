#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * dog_t - typedef for struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
