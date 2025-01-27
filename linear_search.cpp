#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // cout<<"Success";
            return 1;
            
        }
    }
    // cout<<"Unsuccess";
    return 0;
    
}
int main()
{
    int arr[10] = {2, 4, 3, 1, 6, 8, 23, 534, 76, 23};
    cout << "Enter the key" << endl;
    ;
    int key;
    cin >> key;
    int found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is absent";
    }

    return 0;
}