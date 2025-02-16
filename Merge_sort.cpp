#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy first aray k element ko
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy second arra k remaining element
    while (i < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 4, 5, 8, 9};
    int arr2[5] = {2, 3, 6, 7, 10};
    int arr3[10] = {0};
    merge(arr1, 5, arr2, 5, arr3);
    print(arr3, 10);
    return 0;
}