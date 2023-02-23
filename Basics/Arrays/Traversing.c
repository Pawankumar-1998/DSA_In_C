#include <stdio.h>

// this function is used for traversal of the array (i.e displaying the elements in the array)
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" the element at index %d is %d \n", i, arr[i]);
    }
}
void main()
{
    int n;
    printf("Enter the number of element you want to enter in the array \n");
    scanf("%d", &n);

    //  declaring the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at index %d ", i);
        scanf("%d", &arr[i]);
    }
    // printint the array
    printf("The details of the array are :\n");
    traversal(arr, n);
}