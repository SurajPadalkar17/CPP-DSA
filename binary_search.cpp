#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 45, 56, 77, 89, 90};
    int odd[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key ";
    cin >> key;
    int index = binarysearch(even, 6, key);

    if (index == -1)
    {
        cout << "Key not found";
    }
    else
    {
        cout << "Index of key is " << index << endl;
    }

    return 0;
}