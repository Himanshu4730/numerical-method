#include <stdio.h>

float f(float x){ return x*x - 4; }
float df(float x){ return 2*x; }

int main(){
    float x = 3;   

    for(int i=0; i<5; i++)
        x = x - f(x)/df(x);

    printf("Root = %.4f", x);
    return 0;
}