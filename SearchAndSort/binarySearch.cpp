#include <iostream>
using namespace std;

//  function for binary search
int binarySearch(int arr[], int target, int start, int end)
{

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = sizeOfArray - 1;
    int result = binarySearch(arr, target, start, end);
    if (result == -1)
    {
        cout << "The target doesn't exists " << endl;
    }
    else
    {
        cout << "It is at the index " << result;
    }
    return 0;
}