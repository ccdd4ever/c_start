#include "stdio.h"

int main(int argc, char const *argv[])
{

    int a = 1;
    int *pointer_2_a = &a;
    printf("The value of a is %d\n", *pointer_2_a);

    //arrays and pointers
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char *pvowels = &vowels;

    //print the address
    for (int i = 0; i < sizeof(vowels); i++)
    {

        printf("&vowels[%d] values :%d pvowel+%d : %d vowels+%d : %d \n", i, &vowels[i], pvowels + i, vowels + i);
    }

    //print the value
    for (int i = 0; i < sizeof(vowels); i++)
    {

        printf("vowels[%d] values : %d; *(pvowel+%d) values: %d; *(vowels+%d) values :%d \n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

    return 0;
}
