#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

int main(void)
{
    char name[MAX_NAME_LENGTH];

    printf("Welcome to the shopping cart program\n");

    scanf("%s", name);

    printf("Welcome %s\n", name);

	printf("1.Add item\n");
	printf("2.Remove item\n");
	printf("3.Calculate total\n");
	printf("4.exit\n");



    return 0;
}

