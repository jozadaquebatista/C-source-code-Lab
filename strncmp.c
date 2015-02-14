#include <stdio.h>
#include <string.h>

int main (){

    char *str1;
    char *str2;
    int ret;

    str1 = (char*)malloc(sizeof(char));
    str2 = (char*)malloc(sizeof(char));
    
    fprintf(stdout, "Insira a primeira string: ");
    scanf("%s", str1);
    
    fprintf(stdout, "Insira a primeira string: ");
    scanf("%s", str2);
 
    ret = strncmp(str1, str2, 6);
 
    if(ret > 0)
        printf("str1 is longer\n");
    else if(ret < 0)
        printf("str2 is longer\n");
    else
        printf("The two strings are equal\n");
 
    return(0);

}
