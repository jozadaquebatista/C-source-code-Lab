#include <stdio.h>

/* Programa para calculo de fibonnaci recursivo.ss */

int fibonacci(int x); /* Função que será utilizada */

int main(){

    int termo;

    puts("Informe o termo para calcular: ");
    scanf("%d", &termo);
    fprintf(stdout, "O resultado fibonacci para este termo e': %d\n", fibonacci(termo));
    
    return 0;
}

int fibonacci(int x){
    if((x >= 1)&&(x <= 2))
        return 1;
    else
        return (fibonacci(x-1) + fibonacci(x-2));
}
