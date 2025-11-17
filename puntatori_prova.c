#include <stdio.h>
#include <stdlib.h>

int main () {

    int vet[10];
    int *pi;
    pi = vet;

    printf("%d %d", vet + 20, pi);
    printf("\n%d", *(vet + 20));
}