/* Escrevendo um vetor de números na memória com ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        
    int *vetor;
    
    vetor = malloc(8*sizeof(int));
    
    *(vetor+0) = 61;
    *(vetor+1) = 62;
    *(vetor+2) = 63;
    *(vetor+3) = 64;
    *(vetor+4) = 65;
    *(vetor+5) = 66;
    *(vetor+6) = 67;
    *(vetor+7) = 68;

    for(int i = 0; i < *vetor; ++i && ++vetor){
        fprintf(stdout, "%d\n", *(vetor));
    }
    
    fprintf(stdout, "Fora do loop: %d\n", *(vetor=vetor-8));
    fprintf(stdout, "Fora do loop: %d\n", *(vetor));
    return(0);
}
