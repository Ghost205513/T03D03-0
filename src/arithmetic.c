#include <stdio.h>

int sum(int a, int b) { return a + b; }

int diff(int a, int b) { return a - b; }

int mult(int a, int b) { return a * b; }

int div(int a, int b) { return a / b; }

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        if (b == 0)
            printf("%d, %d, %d, n/a\n", sum(a, b), diff(a, b), mult(a, b));
        else
            printf("%d %d %d %d\n", sum(a, b), diff(a, b), mult(a, b), div(a, b));
    } else {
        printf("n/a\n");
    }
}
