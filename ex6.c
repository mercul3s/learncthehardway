#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'R';
	char first_name[] = "Mercedes"; // string is name[], or an array of chars
	char last_name[] = "Coyle";

	printf("you are %d miles away.\n", distance);
	printf("you have %f levels of awesome power.\n", power);
	printf("you have %f awesome super powers.\n", super_power);
	printf("I have an initial %c. \n", initial);
	printf("I have a first name %s. \n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s. \n", first_name, initial, last_name);
	printf(""); //doesn't print
	return 0;
}