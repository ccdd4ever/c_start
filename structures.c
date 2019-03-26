#include "stdio.h"

struct point
{
    int x;
    int y;
    /* data */
};

typedef struct
{
    /* data */
    int x;
    int y;
} point1;

int main(int argc, char const *argv[])
{
    struct point p;
    p.x = 1;
    p.y = 2;

    point1 p1;
    p1.x = 1;
    p1.y = 2;

    return 0;
}
