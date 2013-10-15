#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Mercedes";
	// make sure to add a [] after your variable names, or else you will
	// get a segfault when printing out the variable:
	// ex8.c:8:8: warning: excess elements in scalar initializer
	// ex8.c:21:53: warning: format specifies type 'char *' but the argument has type
    // 'char' [-Wformat]
	char full_name[] = {
		'M', 'e', 'r', 'c', 'e', 'd', 'e', 's',
		' ', 'C', 'o', 'y', 'l', 'e', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d, the second %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) /  sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}