#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *c;
    c = malloc(9*sizeof(char));
    memset(c, 4, 9);
    fprintf(stdout, "conteudo: %s\n", c);
    
    free(c);
    return 0;
}
