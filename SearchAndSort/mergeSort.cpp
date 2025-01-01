#include <iostream>
using namespace std;

//  this function merges the two sub arrays
void merge(int arr[], int left, int mid, int right)
{
    int lSize = (mid - left) + 1;
    int rSize = (right - mid);

    //  create two temporary sise of the array
    int *leftArray = new int[lSize];
    int *rightArray = new int[rSize];

    // copy the element for the original array to the temo array
    // copying the elements to the left array
    for (int i = 0; i < lSize; i++)
    {
        leftArray[i] = arr[left + i];
    }
    //  coptying the elements to the right array
    for (int j = 0; j < rSize; j++)
    {
        rightArray[j] = arr[mid + 1 + j];
    }

    //  compare the left elements and the right elements and merge back to the main arra
    int i = 0; // pointer for the left array
    int j = 0; // pointer for the right array
    int k = left;
    while (i < lSize && j < rSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    //  if the left array left with elements then copy the elemets to the original array

    while (i < lSize)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    //  if the right  array si left  with elements then copy the elemets to the original array

    while (j < rSize)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

//  function for the merge sort
void mergeSort(int arr[], int start, int end)
{
    // if there are elements to devide then only go further or else return
    if (start < end)
    {
        //  divide the array in two halfs
        int mid = start + (end - start) / 2;

        // left sub part of the array
        mergeSort(arr, start, mid);

        //  right sub part of the array
        mergeSort(arr, mid + 1, end);

        //  send the two sub array to merge
        merge(arr, start, mid, end);
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = sizeOfArr - 1;
    cout << "Given array is \n";
    printArray(arr, sizeOfArr);

    mergeSort(arr, start, end);

    cout << "\nSorted array is \n";
    printArray(arr, sizeOfArr);
    return 0;
}