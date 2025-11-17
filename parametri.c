#include <stdio.h>

int main(int argc, char *argv[]) {
    
    printf("Numero di argomenti: %d\n", argc);

    for (int i = 0; *(argv + i); i++) {
        printf("Argomento %d: %s\n", i, argv[i]);
    }

    return 0;
}
