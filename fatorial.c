#include <stdio.h>
#include <locale.h>

int fatorial(int n);

int main(int argc, char **argv){

    setlocale(0, "portuguese");

    int num, resultado;

    puts("Insira o número para calcular o fatorial: ");
    scanf("%d", &num);

    resultado = fatorial(num);

    if(resultado)
        fprintf(stdout, "O resultado: %d\n", resultado);
    else
        fprintf(stdout, "Ocorreu um erro ao calcular o fatorial deste numero <%d>,\n talvez ele seja grande demais,\n tente com um número menor.\n", num);
        
    return 0;
}

int fatorial(int n){
    
    if(n<=1)
        return 1;
    else
        return n * fatorial(n-1);
}

/***************************************************************************************
*                 Programa para calcular o fatorial de um numero                      *
***************************************************************************************/
