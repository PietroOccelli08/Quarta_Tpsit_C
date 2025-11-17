#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myLib.h"


int main () {
    
    Record* r;
    r = create(456, "Mi chiamo pietro.");
    printf("%d %s\n", r->n, r->s);
    setS("Ho 17 anni.", r);
    setN(302, r);
    printf("%d %s\n", r->n, r->s);
    setS("Questa stringa e' diversa!!", r);
    setN(123, r);
    printf("%d %s\n", r->n, r->s);
    kill(r);

    return 0;
}