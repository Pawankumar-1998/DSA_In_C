#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int c = 10;
    int *z = c;
    int a[] = {5, 2, 1, 4, 7};
    int *p;
    p = a;
    printf("%d\n", a[2]);
    // printing thw value in 0 index of a
    printf("%d\n", a[0]);
    // printing the address of 0 index
    printf("%d\n", &a[0]);
    // printing the address of a
    printf("%d\n", a);
    // printing the value ( address ) stored in p
    printf("%d\n", p);
    // printing the value that the adress in p contain
    printf("%d\n", *p);
    p++;
    printf("new address in p is %d \n", p);
    printf("accessing the first element in the array using pointer after incrementing  p is %d\n", *p);
    //  trying something new here
    // int a[] = {5, 2, 1, 4, 7};
    
    printf("%d\n",*a);
    printf("%d\n",*a+1);
    printf("%d",*(a+1));




    return 0;
}