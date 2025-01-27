#include <iostream>
using namespace std;

void updat(int arr[], int n)
{
    cout << "Inside the funcion" << endl;
    //update arra
    arr[0]=120;
    // printing array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main" << endl;
}
int main()
{
    int arr[3] = {1, 2, 5};
    updat(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}