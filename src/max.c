#include <stdio.h>

int max(int a, int b);

int main() {
    float x, y;
    x = -1.5;
    y = -1.5;
    scanf("%f %f", &x, &y);
    if (((int)x == x) && ((int)y == y))
        printf("%d", max(x, y));
    else
        printf("n/a");
}

int max(int a, int b) {
    if (b >= a)
        return b;
    else
        return a;
}
