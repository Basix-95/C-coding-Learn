/*Tracing example*/
#include <stdio.h>

int main(void) {
    int a = 42, b = 7;
    int c = 999;

    int *t = &a;
    int *u = NULL;

    printf("%d %d\n", a, *t);

    c = b;
    u = t;

    printf("%d %d\n", c, *u);

    a = 8;
    b = 8;
    printf("%d %d %d %d\n", b, c, *t, *u);

    *t = 123;
    printf("%d %d %d %d %d\n", a, b, c, *u, *t);

    return 0;
}