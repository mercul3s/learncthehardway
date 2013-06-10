#include <stdio.h>

/* This is a multi-line comment. */

int main(int argc, char *argv[])
{
	int distance = 100;
	// this is also a comment (but it is only one line)
	printf("you are %d miles away. \n", distance);	// variable substitution in string
	return 0;	// returns an integer as the exit value
}