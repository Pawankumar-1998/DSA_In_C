#include <stdio.h>
int count = 1000;
int func()
{
    static int count = 0;
    count++;
    return count;
}
int main()
{
    static int count = 100;
    printf("%d \n", func());
    printf("%d \n", func());
    printf("%d \n", count);
    return 0;
}