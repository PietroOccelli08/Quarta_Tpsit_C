/*
Scrivere un programma in c che cfei una rubrica telefonica
fatta con una lista, con nome e numero
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    char* number;
    struct Node* next;
} Node;

Node* createNode(char* name, char* number, Node* prec){
    Node* new = (Node*)malloc(sizeof(Node));
    prec->next = new;

    new->name = strdup(name);
    new->number = strdup(number);
    new->next = NULL;

    return new;
}

void freeNode(Node* node, Node* prec){
    prec->next = node->next;
    free(node->name);
    free(node->number);
    free(node);
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    char* name = "Pietro";
    char* number = "3393222064";

    head->name = strdup(name);
    head->number = strdup(number);
    head->next = NULL;

    Node* person1 = createNode("Frank", "3712809694", head);
    printf("%s %s %p", head->name, head->number, head->next);

    return 0;

}