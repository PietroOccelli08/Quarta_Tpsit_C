#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 1024

char* readline(FILE* in) {
    //char* ret;
    char buffer[MAX_STR];
    int i;
    char c;

    for(i = 0; ((c = fgetc(in)) != '\n') && (c != EOF); i++) {
        buffer[i] = c;
    }
    
    return(i == 0)? NULL:strdup(buffer);
}

int main(int argc, char *argv[]) {
    FILE* fp = fopen("ilmiofile.csv", "r");
    //richiamo errore
    char* line;
    while(line = readLine(fp)) {
        //char** fields = split(line);
        //Persona p = creaPersona(*(fields), *(fields+1), *(fields+2));
        //free(fields);
        //free(line);
    }
}