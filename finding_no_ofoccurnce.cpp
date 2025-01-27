// #include <iostream>
// using namespace std;

// void findFirstAndLastOccurrence(int array[], int size, int target)
// {
//     int firstIndex = -1;
//     int lastIndex = -1;

//     // Traverse the array to find the first and last occurrence of 'target'
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == target)
//         {
//             if (firstIndex == -1)
//             {
//                 firstIndex = i;
//             }
//             lastIndex = i;
//         }
//     }

//     if (firstIndex != -1)
//     {
//         cout << "First occurrence of " << target << " is at index: " << firstIndex << endl;
//         cout << "Last occurrence of " << target << " is at index: " << lastIndex << endl;
//     }
//     else
//     {
//         cout << target << " is not present in the array." << endl;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 2, 2, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 2;

//     findFirstAndLastOccurrence(arr, size, target);

//     return 0;
// }

//   ######################     another Way       ##############################

#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    // int mid = s + (e - s) / 2;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[5] = {1, 3, 3, 3, 4};
    cout << "first occurance of 3 is " << firstocc(even, 5, 3) << endl;
    cout << "LAst occurance of 3 is " << lastocc(even, 5, 3);
    return 0;
}