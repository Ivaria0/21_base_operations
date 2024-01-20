#include <math.h>
#include <stdio.h>

float calc(float x);

int main() {
    float x;
    x = 0;
    int a = scanf("%f", &x);
    if (a == 1)
        printf("%.1f", calc(x));
    else
        printf("n/a");
}

float calc(float x) {
    float y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1. / 3) - 1e3) * x + 3) / (x * x / 2) -
              x * pow(10 + x, 2. / x) - 1.01;
    return y;
}
