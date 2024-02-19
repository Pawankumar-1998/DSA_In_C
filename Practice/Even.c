#include <stdio.h>

void recursion(int);

void main()
{
    int num = 50;
    recursion(num);
}

void recursion(int num)
{
    if (num < 0)
    {
        return;
    }

    if (num % 2 == 0)
    {
        printf("%d ", num);
    }

    recursion(num - 1);
}