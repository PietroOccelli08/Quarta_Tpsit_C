/*
Scrivere un programma in c che cfei una rubrica telefonica
fatta con una lista, con nome e numero
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* nome;
    char* numero;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    char* nome = "Pietro";
    char* numero = "3393222064";

    head->nome = strdup(nome);
    head->numero = strdup(numero);
    head->next = NULL;

    printf("%s %s", head->nome, head->numero);

    free(head->nome);
    free(head->next);
    free(head);

    return 0;

}