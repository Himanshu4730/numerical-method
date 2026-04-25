#include <stdio.h>

int main() {
    float y[4][4] = {
    {1,0,0,0},
    {2,0,0,0},
    {4,0,0,0},
    {8,0,0,0}
};
    float x = 1.5, u, h = 1, sum;
    int i, j;

    for(j = 1; j < 4; j++)
        for(i = 0; i < 4 - j; i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];

    u = (x - 0) / h;
    sum = y[0][0];
    float term = 1;

    for(i = 1; i < 4; i++) {
        term = term * (u - i + 1) / i;
        sum += term * y[0][i];
    }

    printf("Result = %.3f", sum);
    return 0;
}