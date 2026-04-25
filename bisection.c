#include <stdio.h>
#include <math.h>

float f(float x) {
    return x*x - 4;   
}

int main() {
    float a = 0, b = 3, c;

    while (fabs(a - b) > 0.01) {
        c = (a + b) / 2;

        if (f(c) == 0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("Root = %.2f", c);
    return 0;
}