#include "stdio.h"
#include "stdlib.h"

typedef struct
{
    char *name;
    int age;
} person;

int main(int argc, char const *argv[])
{
    person *p = malloc(sizeof(person));
    p->name = "yh";
    p->age = 28;

    printf("my name is :%s ,age :%d\n", p->name, p->age);

    free(p);

    //after free the value released, the variable point to somewhereelse in the memory
    printf("my name is :%s ,age :%d\n", p->name, p->age);
    return 0;
}