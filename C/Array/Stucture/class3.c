#include <stdio.h>
struct emp
{
    int age;
    char letter;
    struct emp *link;
};

int main()
{
    printf("the size of the structure is %d \n", sizeof(struct emp));
}