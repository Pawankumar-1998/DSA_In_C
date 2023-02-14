#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int a = 10;
    float b = 2.5f;
    char c = 'x';
    int *p = &a;
    float *q = &b;
    char *r = &c;

    printf("Showing the value through pointer  p %d \n", *p);
    printf("The Address stored in pointer p is %p \n", &a);
    printf("The Address stored in pointer p is inside pointer  %p \n", p);
    printf("Showing the value through pointer q %d \n ", *q);
    printf("The Address stored in pointer p is %d \n", &b);

    return 0;
}