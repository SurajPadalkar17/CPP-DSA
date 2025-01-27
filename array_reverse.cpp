#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Swap the elements at start and end
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // Or
        swap(arr[start], arr[end]);

        // Move towards the middle
        start++;
        end--;
    }
}

int main()
{
    int n;

    // Input size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // Reverse the array
    // reverseArray(arr, n);

    // // Output the reversed array
    cout << "Reversed array: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
