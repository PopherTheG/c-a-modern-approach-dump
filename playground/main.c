#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void make_p_a_point_to_b(char **p_ch, char * p_new) {
    *p_ch = p_new;    
}

int main(int argc, char *argv[]) {
    char a = 'a';
    char b = 'b';
    
    char * p_a = &a;
    printf("%c\n", *p_a);
    make_p_a_point_to_b(&p_a, &b);
    printf("%c\n", *p_a);
    return 0;
}
