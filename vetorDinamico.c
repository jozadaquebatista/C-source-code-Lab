#include <stdio.h>
#include <stdlib.h>

/***************************************************************
* EXPERIMENTO: TENTATIVA DE CRIAR UM VETOR DINAMICO NA MEMORIA *
* FIZ ISSO PORQUE OUVI ALGUNS DIZEREM QUE NÃO É POSSÍVEL CRIAR *
* UM VETOR DINAMICO, FIZ O TESTE PROVANDO QUE É POSSÍVEL SIM.  *
***************************************************************/

int main( void ){
        
    int *vetor;
    
    vetor = malloc(8*sizeof(int)); /* aqui eu aloco 8 posições de memória para o ponteiro vetor */
    
    /**************
    * AQUI VAI AS *
    * ATRIBUIÇÕES *
    **************/
    /**/*(vetor+0) = 61;
    /**/*(vetor+1) = 62;
    /**/*(vetor+2) = 63;
    /**/*(vetor+3) = 64;
    /**/*(vetor+4) = 65;
    /**/*(vetor+5) = 66;
    /**/*(vetor+6) = 67;
    /**/*(vetor+7) = 68;
    /**************** fim das atribuições */

    /************************************
    *        PERCORRE O PONTEIRO        *
    * MOSTRANDO O VALOR DE CADA POSIÇÃO *
    ************************************/
    /**/for(int i = 0; i < *vetor; ++i && ++vetor){
    /**/    fprintf(stdout, "%d\n", *(vetor));
    /**/}
    /********************************* */
    
    //----------------------------------------.
    
    /****************************************
    * VOLTANDO A POSIÇÃO INICIAL NA MEMÓRIA *
    * MOSTRANDO O VALOR DE CADA POSIÇÃO.    *
    ****************************************/
    /**/fprintf(stdout, "Fora do loop: %d\n", *(vetor=vetor-8));
    /**/fprintf(stdout, "Fora do loop: %d\n", *(vetor));
    /***************************************/
    
    //----------------------------------------.
    
    /****************************************
    *     LIBERA CADA POSIÇÃO DO VETOR      *
    ****************************************/
    /**/for(int i = 0; i < *vetor; ++i && ++vetor){
    /**/    free(vetor);
    /**/}
    /***************************************/
    
    fprintf(stdout, "%s\n", *(vetor)); /* Mostrando agora que o vetor foi desalocado <NULL> */
    
    return(0); // <--- FIM MISSION SUCESS!
}
