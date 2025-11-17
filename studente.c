#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myLib.h"


int main () {
    
    Student* stud;
    stud = createStudent(17, 8.25, "Pietro");
    printStudent(stud);
    setName("Aldo", stud);
    setAge(19, stud);
    setGrade(7.5, stud);
    printStudent(stud);
    disposeStudent(stud);
    return 0;
}