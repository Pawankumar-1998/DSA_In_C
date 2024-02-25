#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

//  code for the partition
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            // swap the value
            swap(arr, start, end);
        }
    }
    swap(arr, low, end);
    return end;
}

//  code for the quick sort
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        //  it returns the pivot element
        int pivot = partition(arr, low, high);

        //  this is the left partition of the array
        quickSort(arr, low, pivot - 1);

        // this is the right partition of the array
        quickSort(arr, pivot + 1, high);
    }
}

// Utility function to print the elements of an array
void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    cout << "Original array: ";
    printArray(arr);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}