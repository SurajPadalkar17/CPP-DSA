#include <iostream>
using namespace std;
int repeatcount(int arr[], int size)
{
     int count = 1;
    for (int i = 0; i < size - 1; i++)
    {
       
        if (arr[i] == arr[i + 1])
        {
            count = count + 1; 
        }
      
    } 
    return count;
}
int main()
{
    int arr[6] = {4, 4, 4, 4, 4, 5};
    int result = repeatcount(arr, 6);
    cout << result;
    return 0;
}