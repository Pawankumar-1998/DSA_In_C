#include <iostream>
using namespace std;

//  function getting the maximum index form the array
int getMaxIndex(int arr[], int start, int end)
{
    int max = start;
    for (int i = 0; i <= end; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    return max;
}

//  function for swapping
void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

// function for the selection sort
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int lastIndex = size - i - 1;
        int maxIndex = getMaxIndex(arr, 0, lastIndex);
        swap(arr, lastIndex, maxIndex);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}