#include <stdio.h>

int main() {
    float x = 0, y = 0, x1, y1;
    int i;

    for (i = 0; i < 5; i++) {
        x1 = (11 - y) / 10;
        y1 = (11 - x) / 10;

        x = x1;
        y = y1;
    }

    printf("x = %.2f, y = %.2f", x, y);
    return 0;
}