#include <iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int key)
{
    // base case

    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return false;
    }
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 3, 4, 5, 6, 8};
    int size = 6;
    int key = 8;

    int ans = binarysearch(arr, 0, 5, key);
    if (ans)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}