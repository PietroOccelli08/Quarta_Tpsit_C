#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define MAX_STR 1024

typedef struct {
    int n;
    char* s;
} Record;

typedef struct {
    char *name;
    int age;
    float grade;
} Student;

void errore(char *s, int n) {
    printf("%s\n", s);
    printf("%d: %s\n", errno, strerror(errno));
    exit(n);
}


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

Record* create(int n, char *s) {
    Record* ret = (Record*)malloc(sizeof(Record));
    ret->n = n;
    ret->s = strdup(s);
    return ret;
}

void setS(char* s, Record* r) {
    free(r->s);
    r->s = strdup(s);
}

void setN(int n, Record *r) {
    r->n = n;
}


void kill(Record* r) {
    free(r->s);
    free(r);
}


Student* createStudent(int age, float grade, char* name) {
    Student* stud = (Student*)malloc(sizeof(Student));
    stud->age = age;
    stud->grade = grade;
    stud->name = strdup(name);
    return stud;
}


void setName(char* name, Student* stud) {
    free(stud->name);
    stud->name = strdup(name);
}

char* getName(Student* stud) {
    return stud->name;
}

void setAge(int age, Student* stud) {
    stud->age = age;
}

int getAge(Student* stud) {
    return stud->age;
}

void setGrade(float grade, Student* stud) {
    stud->grade = grade;
}

float getGrade(Student* stud) {
    return stud->grade;
}

void disposeStudent(Student* stud) {
    free(stud->name);
    free(stud);
}

void printStudent(Student* stud) {
    printf("Nome: %s Eta': %d Voto: %.2f\n", getName(stud), getAge(stud), getGrade(stud));
}