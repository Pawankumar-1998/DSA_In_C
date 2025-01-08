#include <stdio.h>

typedef union
{
    int a;
    char p;
    float c;
} test;

int main()
{
    test t;
    t.p = 7;
    printf("The value in the union is %c \n", t.p);
}
