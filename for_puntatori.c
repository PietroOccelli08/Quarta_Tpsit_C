#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main() {
    int v[DIM] = {10, -2, 13, 15,-4};
    
    for(int *p = v; p < v+DIM; p++) {
        printf("Indirizzo %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Differenza tra puntatori: %d\n", p - v); //La differenza tra puntatori ci da un intero, che è l'indice del ciclo
    }
    
    return 0;
}