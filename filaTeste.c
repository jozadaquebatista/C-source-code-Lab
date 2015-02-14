#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Elemento */
typedef struct lista{

    int id;
    struct Lista *prox;

}Lista;

int main(){

    /* Definindo o idioma padrão da aplicação */
    setlocale(0, "portuguese");

    /* Alocando elemento de tipo estrutura(TAD) */
    Lista *elem = (Lista *) malloc(sizeof(Lista)), *p_aux = NULL;
    
    /* Verificando se o elemento de tipo estrutura foi alocado com sucesso */
    elem != NULL?fprintf(stdout, "O elemento foi alocado com sucesso! \n\n"):fprintf(stdout, "O elemento não foi alocado com sucesso!\n\n");
    /***********************************************************************/
    
    /*elem->id = 2001;
    elem->prox = NULL;*/
    
    p_aux = (Lista *) malloc(sizeof(Lista));
    p_aux = elem;
    p_aux->id = 2001;
    elem = p_aux;
    free(p_aux);
    
    p_aux = (Lista *) malloc(sizeof(Lista));
    p_aux = elem;
    p_aux->id = 2002;
    elem = p_aux->prox;
    free(p_aux);
    
    fprintf(stdout, "Elemento 1(id): %d\n", (elem[0]));
    fprintf(stdout, "Elemento 2(id): %d\n", (elem[1]));
    
    /* Libera os elementos alocados */
    free(elem);    
    return(0);

}
