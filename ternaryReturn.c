#include <stdio.h>

#define A 23
#define B 12

int tReturn(int a, int b)
{
    return (a > b ? 1 : 0);
}

int main()
{
    puts(  (tReturn(A,B) == 1) ? "<true>" : "<false>" );
}
