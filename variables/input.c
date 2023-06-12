#include <stdio.h>
#define MAX_LEN_NAME 100

int main(void)
{
	char student_name[MAX_LEN_NAME], student_name2[MAX_LEN_NAME];

	printf("Welcome to class\n");
	printf("What is your name? ");

	scanf("%s%s", student_name, student_name2);

	//fgets(student_name, MAX_LEN_NAME, stdin);
	//printf("Hello %s, feel comfortable being part of the SE program\n", student_name);
	printf("Hello %s %s, feel comfotable to be in the SE program\n", student_name, student_name2);


	return (0);
}
