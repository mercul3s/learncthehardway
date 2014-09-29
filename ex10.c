#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    // go through each string in argv
    // skipping argv[0] because that is the name of the program
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // an array of strings
    char *states[] = {
        "California", "Oregon", "Texas", "Washington"
    };

    // do we have to write a length function to get the 
    // number of elements in an array, or is there a builtin?
    int num_states = 4;

    for(i = 0; i < num_states; i++) {
        printf("State %d: %s\n", i, states[i]);
    }

    return 0;
}