#include <stdlib.h>
#include <string.h>


char *getOS() {
    char *os;
    os = (char *) malloc(10 * sizeof(char));
    strcpy(os, "MacOSX");
    return os;
}