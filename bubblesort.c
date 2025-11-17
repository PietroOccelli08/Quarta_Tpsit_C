#include <stdio.h>
#include <stdlib.h>
#define DIM 6

int main() {
    int vett[DIM] = {15, 9, 12, 11, 3, 7};
    int *p, *q;
    int temp;

    for (p = vett; p < (vett + DIM); p++) {
        printf("%d ", *p);
    }

    for (q = (vett + (DIM - 1)); q > vett; q--) {
        for (p = vett; p < q; p++) {
            if (*p > *(p + 1)) {
                temp = *(p + 1);
                *(p + 1) = *p;
                *p = temp;
            }
        }
    }

    printf("\n");
    for (p = vett; p < (vett + DIM); p++) {
        printf("%d ", *p);
    }

    return 0;
}
