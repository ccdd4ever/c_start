#include "stdio.h"

typedef struct
{
    int length;
    int wide;
    /* data */
} rectangular;

int square(rectangular *r)
{
    return (*r).length * (*r).wide;
}

int circumference(rectangular *r)
{
    return 2 * r->length + 2 * r->wide;
}

int main(int argc, char const *argv[])
{
    rectangular r;
    r.length = 3;
    r.wide = 2;
    printf("square of this rectangualr is %d\n", square(&r));
    printf("circumference if this rectangular is %d\n", circumference(&r));
    return 0;
}
