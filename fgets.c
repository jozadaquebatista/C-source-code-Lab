#include <stdio.h>

int main(){

    char nome[25];

    fprintf(stdout, "insira seu nome: ");
    fgets(nome, 25, stdin);
    fprintf(stdout, "Seu nome é muito bonito, %s\n", nome);
    
    return 0;

}
