#ifndef MYLIB_H
#define MYLIB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "myLib.c"


void errore(char *s, int n);
char* readline(FILE* in);
Record* create(int n, char *s);
void setS(char* s, Record* r);
void setN(int n, Record* r);
void kill(Record* r);
Student* createStudent(int age, float grade, char* name);
void setName(char* name, Student* stud);
char* getName(Student* stud);
void setAge(int age, Student* stud);
int getAge(Student* stud);
void setGrade(float grade, Student* stud);
float getGrade(Student* stud);
void disposeStudent(Student* stud);
void printStudent(Student* stud);
//createstudent FATTO
//set/get name
//disposestudent(kill)
//set/get grade
//set/get age
//print student

#endif //MYLIB_H
