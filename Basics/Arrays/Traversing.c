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

// bubble sort algoritm
void bubbleSort(int arr[], int size)
{

    int swapped; // this for making bit optimization for bubbble sort algorithm
    for (int i = 0; i < size; i++)
    {
        swapped = 0; // it means no swapped where happpen
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = 1; // if this condition hits it means it has swapped the values ;
            }
        }

        // if the inner loop haven't maded any swaps it means arrays has sorted and doesnt need to make it run for futher iteration , so break the loop
        if (swapped == 0)
        {
            break;
        }
    }
}

// selection sort algorithm
void selectionSort(int arr[], int n)
{
    int min, i, j;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    printf("Enter your choice \n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("The details of the array are :\n");
        // printint the array
        traversal(arr, n);
        break;

    case 2:
        // linear search algorithm
        printf("Enter the element you are looking for in the array \n");
        linearSearch(arr, n, target);
        scanf("%d", &target);
        break;

    case 3:
        // bubble sort algorith
        bubbleSort(arr, n);
        printf("After sorting \n");
        traversal(arr, n);
        break;

    case 4:
        // selection sort
        selectionSort(arr, n);
        traversal(arr, n);
    }
}
// int arr[] = {1, 2, 3, 4, 5, 6};
// int size = sizeof(arr) / sizeof(int);
// printf("the size is %d \n ", size);