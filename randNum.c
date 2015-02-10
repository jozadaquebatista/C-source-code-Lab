#include <stdio.h>
#include <math.h>

int main ()
{
  for(unsigned int i=0; i < pow(10, 12); i++)
    fprintf(stdout, "%d ", rand()%10000); /* Gera um numero aleatorio entre 0 e 10000 */
  return 0;
}



/***************************************************************************/
*                             PROGRAMA PARA GERAR UM NUMERO                 *  
*                             ALEATORIO.                                    *    
****************************************************************************/
