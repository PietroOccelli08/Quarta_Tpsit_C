#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 1024

 int main() {

    char b[MAX_STR];
    int i = 0;

    do {
        b[i] = fgetc(stdin);
    } while(b[i++] != '\n');

    b[i--] = '\0';
    printf("%s", b);

    return 0;
 }

 // *(b+i)
