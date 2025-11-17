#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM1 5
#define DIM2 8

int main(int argc, char *argv[]) {
    
    int **a, i, j;

    a = (int**)malloc(DIM1 * sizeof(int*));
    for(i = 0; i < DIM1; i++) {
        a[i] = (int*)malloc(DIM2 * sizeof(int));
    }
    for(i = 0; i < DIM1; i++) {
        for(j = 0; j < DIM2; j++) {
            a[i][j] = i * j;
        }
    }
    for(i = 0; i < DIM1; i++) {
        for(j = 0; j < DIM2; j++) {
            printf("%d", a[i][j]);
        }
    }
    for(i = 0; i < DIM1; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}