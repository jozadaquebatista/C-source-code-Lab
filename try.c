#include <stdio.h>
#include <stdlib.h>

#define printar(msg) (puts(msg))
// scanf("%d", &integer)
#define pega_string(buff, str) (fgets(str, buff, stdin))
#define String n (char n)
#define null NULL

void show_message(const char* str1, const char* str2)
{
    puts(str1);
    puts(str2);
}

typedef void (*show_message)(const char*,const char*);
// See function typedef

typedef struct str
{

    const char *str;    

} string;

int main()
{
    char msg[100];
    string *nome;
    const char *someoneMsg = null;
    
    nome->str = (const char*)malloc(sizeof(const char*));
    nome->str = "Jozadaque";

    /**
    **
    *  function printar(str): shows a message to the screen
    *  function pega_string(buff, str): gets a string to a variable
    **
    **/

    printar("Essa e' uma mensagem qualquer ...");
    
    pega_string(50, msg);
    
    printar(msg); 
}
