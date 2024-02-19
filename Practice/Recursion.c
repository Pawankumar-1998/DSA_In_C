#include <stdio.h>

void recursion(int);

void main()
{
    int num = 50;
    recursion(num);
}

void recursion(int num)
{
    if (num > 0)
    {
        printf("%d \n", num);

        recursion(num - 1);
    }
}