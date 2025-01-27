#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // declare
    int num[15];
    cout << "value at 0 " << num[0] << endl;

    // initialization of array
    int second[3] = {5, 7, 4};
    cout << "value at 0 " << second[0] << endl;
    int third[15] = {2, 8, 19};

    // for (int i = 0; i < n; i++)
    // {
    //     cout << third[i] << " ";
    // }
    // by function
    printarray(third, 15);
    cout << endl;

    // int sizeofarr = sizeof(third); # This will show the value 60 but int have 4 bite memory hence divide by 4
    int sizeofarr = sizeof(third) / sizeof(int);
    cout << "Size of third is " << sizeofarr;
    return 0;
}