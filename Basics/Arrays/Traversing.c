#include <stdio.h>

// void traversal(int);
void main()
{
    int n;
    printf("How many number you want to add in the array \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element in index number %d \n", i);
        scanf("%d", &arr[i]);
    }
    //  displaying all the elements
    for (int i = 0; i < n; i++)
    {
        printf(" Element at index %d is  %d \n", i, arr[i]);
    }
}
