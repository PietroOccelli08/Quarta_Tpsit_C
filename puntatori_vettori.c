#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main () {
    int vet[DIM];
    int *p;
    int max;

    for(p = vet; p < vet+DIM; p++) {
        printf("Inserisci un numero -> ");
        scanf("%d", p);
        if(p == 0) {
            max = *p;
        }
        if(max <= *p) {
            max = *p;
        }
    }   
    printf("Il maggiore e' %d", max);
    
    return 0;
}