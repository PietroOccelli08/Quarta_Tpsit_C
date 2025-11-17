#include <stdio.h>
#define FILESOURCE "creaDuplicato.c"
#define FILEOUT "copia.c"


int main (int argc, char*argv[]) {

    FILE *in, *out;

    in = fopen(FILESOURCE, "r");

    if(in == NULL) {
        printf("Impossibile aprirlo.\n");
        return 1;
    }

    out = fopen(FILEOUT, "w");
    if(out == NULL) {
        printf("Impossibile aprirlo.\n");
        return 1;
    }

    char c;

    while((c = fgetc(in)) != EOF) {
            fputc(c, out);
    }
    printf("File duplicato.");
    fclose(out);
    fclose(in);

    return 0;
}
