#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main() {
    float x, y;
    x = -1.5;
    y = -1.5;
    scanf("%f %f", &x, &y);
    if ((y == 0) && ((int)x == x))
        printf("%d %d %d n/a", sum(x, y), dif(x, y), mul(x, y));
    else if (((int)x == x) && ((int)y == y))
        printf("%d %d %d %d", sum(x, y), dif(x, y), mul(x, y), divi(x, y));
    else
        printf("n/a");
}

int sum(int a, int b) { return a + b; }

int dif(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int divi(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a / b;
}
