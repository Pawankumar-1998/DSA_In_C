#include <stdio.h>

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

    int n, target, ch;
    printf("Enter the number of element you want to enter in the array \n");
    scanf("%d", &n);

    //  declaring the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at index %d ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search \n");
    scanf("%d", &target);

    // passing the array to the linearSearch
    linearSearch(arr, n, target);
}