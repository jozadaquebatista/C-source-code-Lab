#include <stdlib.h>
#include <stdio.h>

int main ()
{
  for(unsigned int i=0; i < 1000000000000000000; i++)
    fprintf(stdout, "%d ", rand()%10000);
  return 0;
}
