#include <math.h>
#include <stdio.h>

float count(int x) {
    return 7e-3 * pow((float)x, 4.0) +
           ((22.8 * pow((float)x, 1.0 / 3.0) - 1e3) * ((float))x + 3.0) / ((float)x * (float)x / 2.0) -
           (float)x * pow(10.0 + (float)x, 2.0 / (float)x) - 1.01;
}

int main() {
    int x;
    if (scanf("%d", &x) == 1 && x != 0) {
        printf("%.1f\n", count(x));
    } else {
        printf("n/a\n");
    }
}
