#include <stdio.h>

// this function is used for traversal of the array (i.e displaying the elements in the array)
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" the element at index %d is %d \n", i, arr[i]);
    }
}

// linear search algorithm
void linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("the element is located at %d index of the array \n", i);
            break;
        }
        if (i == size)
        {
            printf("The element you are looking for is not present in the array \n");
        }
    }
}

void main()
{
    int n, target;
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

    // linear search algorithm
    printf("Enter the element you are looking for in the array \n");
    scanf("%d", &target);
    linearSearch(arr, n, target);
}
// int arr[] = {1, 2, 3, 4, 5, 6};
// int size = sizeof(arr) / sizeof(int);
// printf("the size is %d \n ", size);