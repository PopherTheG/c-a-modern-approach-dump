#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *p = malloc(4);
    free(p);
    strcpy(p, "abc");
    printf("%s\n", p);
    return 0;
}
