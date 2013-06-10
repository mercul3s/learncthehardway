/* <stdio.h> is an input/output library that uses standard io functions
   (printf is one).
*/
#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;
	printf("I am %d years old. \n", age);
	printf("I am %d inches tall. \n", height);
	return 0;
	/* why the return 0? if commented out the code still works. */
}