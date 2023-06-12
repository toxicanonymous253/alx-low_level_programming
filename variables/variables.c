#include <stdio.h>

int main(void)
{
	
	int useragecount = 30;/*A Normalcase style*/
	int UserAgecount = 30;/*A Pascalcase style*/
	int userAgecount = 30;/*A Camelcase*/
	int user_age_count = 30;/*A snake case*/

	char usergrade = 'A';
	double scorepoints = 14.75;
	float sundayscores = 0.75;
	char *username = "Jane";

	printf("%d\n", userAgecount);
	printf("%c\n", usergrade);
	printf("%.3f\n", scorepoints);
	printf("%.2f\n", sundayscores);
	printf("%s\n", username);

	return (0);

}