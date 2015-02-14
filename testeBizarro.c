#include <stdio.h>

int main(){

    printf("[data]: %s\n", __DATE__);
    printf("[data]: %s\n", __FILE__);
    printf("[data]: %s\n", __TIME__);
    unsigned int v = (3>>9);
    double val = (999999999999999999<<63);
    long bigV = val*4;
    printf("bitwise:%d\n",bigV);

}
