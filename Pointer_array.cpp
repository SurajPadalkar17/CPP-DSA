#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // cout << "Address of the first memory block is: " << arr << endl;
    // cout << "Address of the first memory block is: " << &arr[0] << endl;

    // cout << "4th " << *arr << endl;
    // cout << "see " << *(arr + 1) << endl;

    // int i = 3;
    // cout << i[arr] << endl;

    // cout << arr[i] << endl;
    // cout << *(arr + i) << endl;
    // cout << endl
    //      << endl
    //      << endl
    //      << endl;


    // int temp[10] = {1, 2};
    // cout << sizeof(temp) << endl;
    // cout << "1sr " << sizeof(*temp) << endl;
    // cout << "2nd " << sizeof(&temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    int a[20]={1,2,3,5};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;


    return 0;
}
