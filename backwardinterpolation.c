#include <stdio.h>

int main() {
    float y[4][4] = {
        {1,0,0,0},
        {2,0,0,0},
        {4,0,0,0},
        {8,0,0,0}
    };

    float x = 2.5, h = 1, u, sum;
    int i, j;

    // difference table
    for(j = 1; j < 4; j++)
        for(i = 3; i >= j; i--)
            y[i][j] = y[i][j-1] - y[i-1][j-1];

    u = (x - 3) / h;   

    sum = y[3][0];
    float term = 1;

    for(i = 1; i < 4; i++) {
        term = term * (u + i - 1) / i;
        sum += term * y[3][i];
    }

    printf("Result = %.3f", sum);
    return 0;
}