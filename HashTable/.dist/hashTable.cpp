#include <iostream>
using namespace std;

#define N 10

class HashTable
{

    int arr[N];
    int size = 0;

public:
// initializing the array with -1 
    HashTable()
    {
        for (int i = 0; i < N; i++)
        {
            arr[i] = -1;
        }
    }

// function to insert the elements into the array
    void insert(int value)
    {
        if (size >= N)
        {
            cout << "Cannot insert element hashTable is full \n"
                 << endl;
            return;
        }

        int index = value % 10;
        while (arr[index] != -1)
        {
            // index = (index + 1) % 10;
            index++;
        }

        arr[index] = value;
        size++;
    }

    void display()
    {
        for (int i = 0; i < N; i++)
        {

            cout << "a[" << i << "]=";
            cout << arr[i] << "\n ";
        }
    }
};

int main()
{
    HashTable table;

    cout << "After creating hash Table " << endl;
    table.insert(5);
    table.insert(8);
    table.insert(10);
    table.insert(25);
    table.insert(35);

    table.display();
    return 0;
}