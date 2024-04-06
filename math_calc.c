#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a1, int a2) {
    return a1 + a2;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        return 1; // Error - Wrong no. of arguments
    }

    int   idx;
    char* plus, *arg = argv[1];

    plus = strchr(arg, '+');
    if (plus >0  && (idx = (int)(plus - arg))<(strlen(arg) -1) && idx>0) {
        printf("%d\n", sum(atoi(arg), atoi(arg + 1 + idx)));
    }
    else {
        return 2; // Error - No plus between chars
    }
    return 0;
}
