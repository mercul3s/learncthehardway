#include <stdio.h>

int main(int argc, char *argv[]) {
    // go through each string in argv
    printf("Number of arguments is %d\n", argc);
    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    char *states[argc - 1];

    // creating an array of states from our arg list. use 1 as the start since argv[0] is our program name.
    i = 1;
    while(i < argc) {
        states[i-1] = argv[i];
        i++;
    }
    // // let's make our own array of strings
    // // char *states[] = {
    // //     "California", "Oregon", "Washington", "Texas"
    // // };

    int num_states = argc - 1;
    i = 0;  // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}