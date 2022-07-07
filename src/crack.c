#include <stdio.h>

int inside(float x, float y) {  // 0 - no, 1 - yes
    if (x * x + y * y < 25.0)
        return 1;
    else
        return 0;
}

int main() {
    float x, y;
    if (scanf("%f %f", &x, &y) == 2) {
        if (inside(x, y) == 1)
            printf("GOTCHA\n");
        else
            printf("MISS\n");
    } else {
        printf("n/a\n");
    }
}
