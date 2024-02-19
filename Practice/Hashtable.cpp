#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

class HashTable
{
private:
    string array[SIZE];
    int values[SIZE];

public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            array[i] = "";
            values[i] = -1;
        }
    }

    int hashFunction(string key)
    {
        int hash = 0;
        for (int i = 0; i < key.length(); i++)
        {
            hash += key[i];
        }
        return hash % SIZE;
    }

    void insert(string key, int value)
    {
        int index = hashFunction(key);
        while (array[index] != "")
        {
            index = (index + 1) % SIZE;
        }
        array[index] = key;
        values[index] = value;
    }

    int get(string key)
    {
        int index = hashFunction(key);
        while (array[index] != "")
        {
            if (array[index] == key)
            {
                return values[index];
            }
            index = (index + 1) % SIZE;
        }
        return -1;
    }

    void remove(string key)
    {
        int index = hashFunction(key);
        while (array[index] != "")
        {
            if (array[index] == key)
            {
                array[index] = "";
                values[index] = -1;
                return;
            }
            index = (index + 1) % SIZE;
        }
    }

    void printTable()
    {
        cout << "HashTable:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            if (array[i] != "")
            {
                cout << "Key: " << array[i] << ", Value: " << values[i] << endl;
            }
        }
    }
};

int main()
{
    HashTable table;
    table.insert("apple", 1);
    table.insert("banana", 2);
    table.insert("cherry", 3);
    table.insert("date", 4);
    table.insert("elderberry", 5);

    table.printTable();

    cout << "Value of apple: " << table.get("apple") << endl;
    cout << "Value of cherry: " << table.get("cherry") << endl;

    table.remove("banana");

    table.printTable();

    return 0;
}