#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv){

    setlocale(0, "portuguese");
    
    #ifdef _WIN32
        /*Windows specific code here*/
        printf("Seu sistema é WINDOWS!\n");
    #endif
     
    #ifdef __APPLE__
        /*Macintosh OS code here*/
        printf("Seu sistema é MAC OS!\n");
    #endif
     
    #ifdef __linux__
        /*Linux code here*/
        printf("Seu sistema é LINUX!\n");
    #endif
}

/****************************************************************
*               UM SIMPLES PROGRAMA, PARA                       *
*               IDENTIFICAR O SISTEMA OPERACIONAL               *
*****************************************************************/
