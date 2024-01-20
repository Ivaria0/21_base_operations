#include <math.h>
#include <stdio.h>

int main() {
    float x, y;
    int a = scanf("%f %f", &x, &y);
    if (a == 2)
        if (x * x + y * y < 25)
            printf("GOTCHA");
        else
            printf("MISS");
    else
        printf("n/a");
}
