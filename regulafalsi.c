#include <stdio.h>

float f(float x) {
    return x*x - 4;
}

int main() {
    float a=0, b=3, x;

    for(int i=0; i<5; i++) {
        x = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if(f(a)*f(x) < 0)
            b = x;
        else
            a = x;
    }

    printf("Root = %f", x);
    return 0;
}