#include <stdio.h>

int main() {
    float x = 0, y = 0;
    int i;

    for(i = 0; i < 5; i++) {
        x = (11 - y) / 10;
        y = (11 - x) / 10;
    }

    printf("x = %.2f, y = %.2f", x, y);
    return 0;
}