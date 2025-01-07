#include <stdio.h>

int main()
{
    struct Emp
    {
        char hour; // here compiler will add a padding 
        int value;
        char seq;
    };

    printf("the size of the Emp is : %d \n", sizeof(struct Emp));
}