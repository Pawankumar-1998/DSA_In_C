#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // arrays using pointer

    int a[5], i;
    int *p = a;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }

    return 0;
}