// if-else conditionals in C

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // check the arg list length
    if(argc == 1) {
        printf("There is only one argument present.\n");
    }
    // print out the list of args if it is between our range
    else if(argc > 1 && argc < 4) {
        printf("Here are your arguments:\n");
        
        for(i = 0; i < argc; i++) {
            printf("%s\t", argv[i]);
        }
        printf("\n");
    }
    // a list 4 or greater is too long
    else {
        printf("You have too many arguments.\n");
    }
    return 0;
}