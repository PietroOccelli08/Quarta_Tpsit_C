#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//sizeof restituisce la dimensione occupata dai tipi nella RAM

int main() {
    
    printf("Int: %d byte\n", sizeof(int));
    printf("Float: %d byte\n", sizeof(float));
    printf("Double: %d byte\n", sizeof(double));
    printf("Char: %d byte\n", sizeof(char));
    printf("Bool: %d byte\n", sizeof(bool));

    return 0;
}