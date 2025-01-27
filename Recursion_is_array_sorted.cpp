#include <iostream>
using namespace std;

bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaininig = issorted(arr + 1, size - 1);
        return remaininig;
    }
}

// sum od element in array
int sumR(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remaining = sumR(arr+1,size-1);
    int sum = arr[0]+remaining;
    return sum;

    //or
    // return arr[size - 1] + sumR(arr, size - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    bool ans = issorted(arr, size);

    if (ans)
    {
        cout << "array is sorted"<<endl;
    }
    else
    {
        cout << "array is not sorted"<<endl;
    }

    int s = sumR(arr, size);
    cout << "The sum of al ement of array is "<<s;

    return 0;
}