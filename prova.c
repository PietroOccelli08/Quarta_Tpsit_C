#include <stdio.h>
#include <stdlib.h>

int main () {

    int x = 8;
    int *p;
    p = &x;

    printf("%d\n", x);
    printf("%p\n", *p);
    printf("%d\n", p);

    return 0;

}
