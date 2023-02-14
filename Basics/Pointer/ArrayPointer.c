#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int a[50];
    int *p;
    p = a;
    printf("The address of a is %d \n", a);
    printf("The address stored in pointer is %d \n", p);
    printf("The address of first element of the array is %d \n", a[1]);
    printf("The address of zero element of the array is %d", a[0]);

    return 0;
}