#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
    ASINO,
    EQUINO,
    QUELLO_NORMALE,
    SECCHIONE,
    BALZATORE
}Type;

typedef struct {
    char *name;
    float rank;
    Type type;
} Student;

Student* createStudent(char* n, float r, Type t) {
    
    Student* student = (Student*)malloc(sizeof(Student));
    student->name = strdup(n);
    student->rank = r;
    student->type = t;

    return student;
}

int main(){
    Type student = SECCHIONE;

    return 0;
}