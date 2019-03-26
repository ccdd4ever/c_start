#include "stdio.h"

char *name = "YHA";

int main(int argc, char const *argv[])
{

    printf("length of name is %d\n", strlen(name));
    if (strncmp(name, "YHA", 5) == 0)
    {
        printf("it's true");
    }

    return 0;
}
