#include <stdio.h>
#include <conio.h>
#include <string.h>
// #include <array>

int main()
{
    int n;
    printf("How many number you want to enter in the array ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element number ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" The element at  index is %d", a[i]);
    }
    return 0;
}
