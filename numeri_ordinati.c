#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, j;
    int *temp;

    for (i = 1; i < argc - 1; i++) {
        for (j = i + 1; j < argc; j++) {
            if (argv[i] > argv[j]) {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for (i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}
